#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: Number of members
 * @size: size
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);

	while (j < k)
	{
		p[j] = 0;
		j++;
	}
	return (p);
}
