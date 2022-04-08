#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 for success
 */

int main(void)
{
int c0 = 48;
int c1;
int c2;

while (c0 < 58)
{
c1 = c0 + 1;
while (c1 < 58)
{
c2 = c1 + 1;
while (c2 < 58)
{
putchar(c0);
putchar(c1);
putchar(c2);
if (!(c0 == 55 && c2 == 58))
{
putchar(',');
putchar(' ');
}
c2++;
}
c1++;
}
c0++;
}
putchar('\n');
return (0);
}
