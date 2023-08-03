#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c to stdout
 * c: character to print
 *
 * Return: success= 1.
 * -1 is returned On error, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
