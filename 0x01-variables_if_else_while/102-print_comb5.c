#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 for success
 */
int main(void)
{
int c11 = 48, c12 = 48, c21 = 48, c22 = 49;

while (c11 < 58)
{
c12 = 48;
while (c12 < 58)
{
if ((c21 >= 58 || c11 == c21) && c22 >= 58)
{
c21 = c11;
c22 = c12 + 1;
}
else
c21 = 48;
while (c21 < 58)
{
if (c11 != c21)
c22 = 48;
while (c22 < 58)
{
putchar(c11);
putchar(c12);
putchar(' ');
putchar(c21);
putchar(c22++);
if (!(c11 == 57 && c12 == 56))
{
putchar(',');
putchar(' ');
}
}
c21++;
}
c12++;
}
c11++;
}
putchar('\n');
return (0);
}
