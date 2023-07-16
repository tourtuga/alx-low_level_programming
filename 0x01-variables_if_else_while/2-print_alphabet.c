#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar("%c", i);
		i++;
	}
	putchar("\n");
	return (0);
}
