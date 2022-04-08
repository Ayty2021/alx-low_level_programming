#include <stdio.h>

/**
 * main - prints the alphabets in lowercase, then uppercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase;
char uppercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	putchar(lowercase);
}	
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
	putchar(uppercase);
}
putchar('\n');
return (0);
}
