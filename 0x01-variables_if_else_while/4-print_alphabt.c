#include <stdio.h>
/**
 *main - entry point
 *Return: 0 (success)
 */
int main(void)
{
	char ch;
	
	
	ch = 'a';
	while  (ch <= 'z' && ch != ('q'&& 'e') )	
	{
		

		putchar(ch);
		ch++;
		
		

	}
	{
		putchar('\n');
	}
	return (0);

}
