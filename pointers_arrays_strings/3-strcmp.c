#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equal, a negative number if s1 < s2, and a positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }

    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
