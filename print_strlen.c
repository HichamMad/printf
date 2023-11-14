#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Type char pointer
 * Return: k
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != 0; k++)
		;
	return (k);

}
/**
 * _strlenc - Strlen function
 * @s: Type char pointer
 * Return: k
 */
int _strlenc(const char *s)
{
	int k;

	for (k = 0; s[k] != 0; k++)
		;
	return (k);
}
