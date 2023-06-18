#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar (c);
	putchar ('\n');
	return (0);
}
