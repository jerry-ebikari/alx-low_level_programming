#include <stdio.h>

/**
 * main - Main function
 *
 * Return - 0 for success
 */

int main(void)
{
int character = 97;

while (character < 123)
if (character++ && character != 101 && character != 113)
putchar(character);
putchar('\n');
return (0);
}
