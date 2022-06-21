/**
 * _memset - fill n bytes og mempry
 * @s: destinantion memory
 * @b: byte to fill with
 * @n: number of bytes to copy
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
