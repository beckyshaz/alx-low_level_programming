#include <stdio.h>
/**
 *main - entry point
 *Return: 0 (success)
 *combination o single digit numbers
 */
int main(void)
{
	int x;
	
	x = '0';
	while(x <= '9')
	{

		
		putchar(x);
		x++;
		if(x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}	
	{	
		putchar('\n');	
	}
	    
	return (0);
}
