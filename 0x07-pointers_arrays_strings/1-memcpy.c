/**
 * _memcpy - copies memory area
 *
 * @dest: destination copied to
 *
 * @src: memory area to be copied
 *
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
