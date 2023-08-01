#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * s: beginning address of memory to be filled
 * b: desired value
 * n: num of bytes to be changed
 *
 * Return:array with new value for num of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
