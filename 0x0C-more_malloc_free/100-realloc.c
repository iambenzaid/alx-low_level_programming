#include <stdlib.h>
#include "main.h"

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: the pointer
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
*
* Return: return ptr or 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);

	if (p == 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (p);

}
