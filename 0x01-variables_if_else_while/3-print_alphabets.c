#include <stdio.h>

/**
 * main - prints the alphabets in lowercase, then uppercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowwer_case;
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}	
for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}
putchar('\n');
return (0);
}
