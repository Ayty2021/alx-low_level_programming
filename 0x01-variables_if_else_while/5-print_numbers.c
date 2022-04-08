#include <stdio.h>

/**
 * program that prints single digits from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0 ; num < 10 ; num++)
{
printf("%num", num);
}

printf("\n");
return (0);
}
