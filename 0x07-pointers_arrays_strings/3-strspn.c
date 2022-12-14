#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix substring
 * Return: returns integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
