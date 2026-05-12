#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats 2 string to a n bytes
 * @s1: first string to concat to
 * @s2: second string to concat from
 * @n: number of chars to concat from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;
	char *q;
	int i, j;

	unsigned int len1 = 0, len2 = 0;

	char *ret = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Find length of s1*/
	while (s1[len1] != '\0')
		len1++;

	/* Find length of s2*/
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		{
			n = len2;
			printf("if %d (len2) %d (n)\n", len2, n);
		}
	ret = (char *)malloc(sizeof(char) * (len1 + (n + 1)));
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ret[i] = s1[i];
	for (j = 0; j < n; j++)
		ret[i + j] = s2[j];
	ret[i + j] = '\0';

	return (ret);
}
