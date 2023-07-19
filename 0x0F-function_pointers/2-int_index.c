#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Function pointer for the comparison function
 * Description: This function searches for the first element in the array for
 * which the comparison function `cmp` does not return 0.
 *
 * Return: Index of the first matching element, or -1 if no element
 * matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
