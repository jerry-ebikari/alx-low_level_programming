#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 for success
 */

int main(void)
{
int num = 48;

while (num < 58)
{
putchar(num++);
if (num != 58)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
