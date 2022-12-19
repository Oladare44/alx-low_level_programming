#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: pointer to the character array
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
