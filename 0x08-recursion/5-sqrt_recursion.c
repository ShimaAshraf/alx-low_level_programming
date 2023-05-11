#include "main.h"

/**
* _sqrt_recursion - find natural square root
* square - returns the natural square
* @n: first input number
* Return: int
*/

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
* @n: int to find square root
* @val: square root
* Return: int
*/
int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
