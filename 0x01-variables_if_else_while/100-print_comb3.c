#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, k = '0', j;

	for (i = '0'; i <= '9'; i++) /*prints tens digit*/
	{
		for (j = k; j <= '9'; j++)/*prints ones digit*/
		{
			if (i != j)/*eliminates repetition*/
			{
				putchar(i);
				putchar(j);
				if (i == j)/*addes coma and space*/
				{
					continue;
				}
				if (i == '8' && j == '9')
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++
		}
	}
	putchar('\n');
	return (0);
}
