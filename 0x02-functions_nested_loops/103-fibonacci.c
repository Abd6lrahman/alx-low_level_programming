#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* Initialize variables */
	unsigned long fib1 = 1, fib2 = 2, next_fib;
	unsigned long sum = 0;

	/* Calculate and sum even Fibonacci numbers */
	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;
	}

	/* Print the sum of even Fibonacci numbers */
	printf("%lu\n", sum);

	return (0);
}

