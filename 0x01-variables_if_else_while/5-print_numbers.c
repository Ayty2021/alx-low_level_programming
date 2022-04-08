#include <stdio.h>

/**
 * program that prints single digits from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = 0 ; a < 10 ; a++)
{
printf("%a", a);
}

printf("\n");
return (0);
}
