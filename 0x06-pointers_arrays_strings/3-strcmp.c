#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares two strings.
 * @s1: String to be compared.
 * @s2: String for comparison.
 *
 * Return: Difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0); /*Strings are equal*/
}
else
{
return (*s1 - *s2); /*Return the difference*/
}
}




