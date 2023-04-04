#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting the address of a memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
