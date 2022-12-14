#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character to print
 * Return: return pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *chArray;
	unsigned int count;

	if (size == 0)
		return (NULL);
	chArray = malloc(size * sizeof(char));
	if (chArray == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		chArray[count] = c;
	return (chArray);
}
