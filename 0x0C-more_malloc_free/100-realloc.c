#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 *
 * @old_size: the size, in bytes, of the allocated space for ptr
 *
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: void pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr, *new_ptr_char;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);


	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;
	new_ptr_char = new_ptr;
	for (i = 0; i < old_size; i++)
		*(new_ptr_char + i) = *(old_ptr + i);

	free(ptr);

	return (new_ptr);
}
