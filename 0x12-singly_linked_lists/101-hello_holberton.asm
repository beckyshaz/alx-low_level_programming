global main
	extern printf
main:
	mov edi, format
	xor eax, eax
	call printf
	mov    eax, 0
	rot
format: db 'Hello, Holberton', 0
