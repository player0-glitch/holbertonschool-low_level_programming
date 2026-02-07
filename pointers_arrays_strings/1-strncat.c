#include "main.h"

/**
 * _strncat - concatenate head src to dest tail
 *
 * @src: source string
 *
 * @dest: destination string
 *
 * @n: number of bytes to concatenate
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n) {
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;

    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
