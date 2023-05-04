#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: pointers to destination input buffer
* @src: pointer to source input buffer
* @n : bytes of @src
* Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
return (dest);
}
