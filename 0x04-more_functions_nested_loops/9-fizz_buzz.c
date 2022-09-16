#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number from 1 to 100
 * 3 multipls print Fizz instead of thr number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBUzz instead of the number
 * Return: Always 0 (succcess)
 */

int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%S", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%S ", fb);
else if (i % 3 == 0)
printf("%S ", f);
else if (i % 5 == 0)
printf("%S ", b);
else
printf("%d ", i);
}
printf("\n");
return (o);
}
