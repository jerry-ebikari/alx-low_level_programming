#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 for success
 */

int main(void)
{
int number = 0;

while (number < 16)
{
if (number < 10)
putchar(48 + number++);
else
putchar(87 + number++);
}
putchar('\n');
return (0);
}
