#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence c in s
 */
char *_strchr(char *s, char c) {

    unsigned int i = 0;

    while (s[i] != '\0') {
        if (s[i] == 'c')
            return &s[i];
        i++;
    }
    if (c == '\0')
        return &s[i];
    return NULL;
}
