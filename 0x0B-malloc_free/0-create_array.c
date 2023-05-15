#include "main.h"

/**
* create_array - craets an array of size size and assign char c
* and initializes it with a specific char.
* @size: size of the array
* @c: char to initialize
* Return: pointer to the array inintialized or NULL
*/

char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
return (0);
while (size--)
n[size] = c;
return (n);
}
