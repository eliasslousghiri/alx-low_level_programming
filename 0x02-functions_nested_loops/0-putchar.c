#include "holberton.h"

/**
 * main - Entry Point 
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);

		sh++;
	}
	_putchar('\n');

	return (0);
}	
