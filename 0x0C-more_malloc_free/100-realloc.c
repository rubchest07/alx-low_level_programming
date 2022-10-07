#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}

/**
 * _realloc - A C function that reallocates
 * a memory block using malloc and free
 *
 * where ptr is a pointer to the memory previously
 * allocated with a call to malloc: malloc(old_size)
 * old_size is the size, in bytes, of the allocated space for ptr
 * and new_size is the new size, in bytes of the new memory block
 *
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum
 * of the old and new sizes
 *
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call
 * is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 *
 * @ptr: input pointer
 * @old_size: size of old ptr
 * @new_size: size of new ptr
 *
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res = NULL;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		free(ptr);
		res = malloc(new_size);
		return (res);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	res = malloc(new_size);
	_memcpy(res, ptr, old_size);
	free(ptr);
	return (res);
}
