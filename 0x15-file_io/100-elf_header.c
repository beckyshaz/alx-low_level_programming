/**
 *author: Brennan D Baraban
 *File: 100-elf_header.c
 */
#include <sys/types.h>
#include <elf.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void print_magic(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void close_elf(int elf);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 *check_elf - function to check if a file is an elf file or not
 *@e_ident: an array of pointers containing the elf magic number
 *Return: nothing
 */
void check_elf(unsigned char *e_ident)
{
	int j;

	for (j = 0; j < 4; j++)
	{
		if (e_ident[j] != 127 &&
		    e_ident[j] != 'E' &&
		    e_ident[j] != 'L' &&
		    e_ident[j] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 *print_magic - function to print the magic numbers of an elf file
 *@e_ident: an array of pointers that has the elf magic numbers
 *Return: nothing
 */
void print_magic(unsigned char *e_ident)
{
	int j;

	printf(" Magic: ");
	for (j = 0; j < EI_NIDENT; j++)
	{
		printf("%02x",  e_ident[j]);
		if (j == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

}
/**
 *print_class - function that prints a header file class
 *@e_ident: an array of pointers that has the elf class
 *Return: nothing
 */
void print_class(unsigned char *e_ident)
{
	printf(" class:               ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 *print_data - function that prints the data of an elf header file
 *@e_ident: an array of pointers to the elf data
 *Return: nothing
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:                 ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 *print_version - function that prints header file version
 *@e_ident: array of pointers that has the elf version
 *Return: nothing
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:                      %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 *print_osabi - function that prints the OS/ABI of an ELF file
 *@e_ident: an array of pointers to the ELF OS/AB
 *Return: nothing
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:                    ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX -IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX -FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 *print_abi - function to print the elf header file abi
 *@e_ident: an array of pointers to the elf header abi
 *Return: nothing
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version:                %d\n", e_ident[EI_ABIVERSION]);
}
/**
 *print_type - function that prints the type of elf header file
 *@e_type: type of elf file
 *@e_ident: an array of pointers to the elf class
 *Return: noting
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type:                     ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 *print_entry - function to print the entry of an elf header file
 *@e_entry:  elf entry point address
 *@e_ident: an array of pointers to elf class
 *Return: nothing
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point adress:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#1lx\n", e_entry);
}
/**
 *close_elf - function that closes an elf header file
 *@elf: file descriptor
 *Return: nothing
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 *main - Entry point of the program
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0 on success and
 *-1 on failure
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, re;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re = read(op, header, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: %s: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(op);
	return (0);
}

