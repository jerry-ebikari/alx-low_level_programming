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
putchar(character++);
character = 65;
while (character < 91)
putchar(character++);
putchar('\n');
}
