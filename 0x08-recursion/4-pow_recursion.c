#include "main.h"

/**
* _pow_recursion - value of x raised to the power of y
* x: value 2 raise
* y: pow
*
* Return: result of the pow
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
