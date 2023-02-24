#include <stdio.h>
/**
 * main - code block
 * fizzbuzz: program that prints the numbers from 1-100
 * fizz for multiple of 3, buzz for multiple of 5 and
 * fizzbizz for multiple of 3 and 5
 * Return: 0
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		printf(" ");
		 if (i % 3 == 0 && i % 5 == 0)
			 printf("fizzbuzz");
		 else if (i % 3 == 0)
			printf("fizz");
		 else if(i % 5 == 0)
			 printf("buzz");
		 else 
			 printf("%d", i);
	}
	printf("\n");
}

int main(void)
{
	fizzbuzz();
	return 0;

}
