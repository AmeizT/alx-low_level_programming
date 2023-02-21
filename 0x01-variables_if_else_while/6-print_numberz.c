#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digits of base ten starting from zero
 * Return: Always (Success)
*/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
