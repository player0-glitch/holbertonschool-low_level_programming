#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *h;

	if (*needle == '\0')
		return (haystack);

	for (; haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
