#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing bytest to match
 *
 * Return: pointer to first matching byte in s, or NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1;
	char *p2;

	if (s == NULL || accept == NULL)
		return (NULL);

	for (p1 = s; *p1 != '\0'; p1++)
	{
		for (p2 = accept; *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
				return (p1);
		}
	}
	return (NULL);
}
