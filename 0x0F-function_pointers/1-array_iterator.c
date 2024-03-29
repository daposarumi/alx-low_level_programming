#include "function_pointers.h"

/**
 * array_iterator - function executes function
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + 1));
	}
}
