#include "main.h"

/**
* *_strdup - return a pointer to a newly allocated space in memory
* which contains a copy of the string given as a paramete.
* @str: string
* Return: 0
*/

char *_strdup(char *str)
{
char *bbb;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
bbb = malloc(sizeof(char) * (i + 1));
if (bbb == NULL)
return (NULL);
for (r = 0; str[r]; r++)
bbb[r] = str[r];
return (bbb);
}
