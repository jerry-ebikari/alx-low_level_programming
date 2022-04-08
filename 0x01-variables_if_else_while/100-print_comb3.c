#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 for success
 */

int main(void)
{
int c1 = 48;
int c2;

while (c1 < 58)
{
c2 = c1 + 1;
while (c2 < 58)
{
putchar(c1);
putchar(c2++);
if (!(c1 == 56 && c2 == 58))
{
putchar(',');
putchar(' ');
}
}
c1++;
}
putchar('\n');
return (0);
}
