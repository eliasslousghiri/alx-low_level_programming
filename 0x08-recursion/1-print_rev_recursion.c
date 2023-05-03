#include "main.h"
/**
 * _print_rev_recursion - Reverse prints a string.
 * @s: The string that will be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
