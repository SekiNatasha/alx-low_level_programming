#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowerc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
	{
		putchar(lowerc);
	}
	putchar('\n');
	return (0);
}
