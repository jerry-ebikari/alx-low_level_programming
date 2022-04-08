#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 for success
 */

int main(void)
{
int character = 97;

while (character < 123)
if (character++ && character != 102 && character != 114)
putchar(character - 1);
putchar('\n');
return (0);
}
