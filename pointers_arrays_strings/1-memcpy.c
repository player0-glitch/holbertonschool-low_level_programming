#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: memory area to copy to
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    unsigned int i;
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
