#include "function_pointers.h"

/**
 * array_iterator - A function given as a parameter on
 * each element of an array
 * @array: Array to execute function on
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		j = 0;
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
