#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int a = 1, b = 2, temp;
	int i;

	printf("%u, %u", a, b);

	for (i = 2; i < 98; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
		printf(", %u", b);
	}
	printf("\n");

	return (0);
}

