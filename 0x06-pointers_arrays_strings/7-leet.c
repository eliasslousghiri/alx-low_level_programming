#include "main.h"
/**
 * lest - change vowels to numbers.
 * @s: analised string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOT";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
