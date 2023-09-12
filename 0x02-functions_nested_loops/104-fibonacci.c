#include <stdio.h>
/**
 * main - Initializes the first two numbers
 *
 * Return: Always (zero)
 */
int main(void)
{
int fibonacci1 = 1;
int fibonacci2 = 2;

printf("%d, %d, ", fibonacci1, fibonacci2);

count = 2;

while (count < 98)
{
int fibonacci_next = fibonacci1 + fibonacci2;

printf("%d, ", fibonacci_next);

fibonacci1 = fibonacci2;
fibonacci2 = fibonacci_next;

count++;
}

printf("\n");

return (0);
}
