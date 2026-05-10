#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - should return duplicate string 
 * @str: string to duplicate
 * 
 * Returns: copied string
 */
char *_strdup(char* str)
{
    char* dest = NULL;
    size_t len = strlen(str);
    if (str == NULL)
        return NULL;
    dest = (char*) malloc(len * sizeof(str)); 
    /*incase OS fails to give memory*/ 
    if (dest == NULL)
        return NULL;

    memcpy(dest, str, len ); 

    return dest;
}
