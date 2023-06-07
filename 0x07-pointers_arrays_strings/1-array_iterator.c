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

