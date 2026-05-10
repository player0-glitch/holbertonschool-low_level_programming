#include "main.h"
#include <stdlib.h>
#include <string.h>

/** 
 * str_concat -  function to concat string s1 by s2
 * @s1: string to concat from 
 * @s2: string to concat 
 *
 * Returns: pointer to new string
 */
char *str_concat(char* s1,char* s2)
{
    size_t l1,l2;
    char* ret;
    if (s1 == NULL || s2 == NULL)
        return NULL; 
   l1 = strlen(s1); 
   l2 = strlen(s2);
   ret = (char*)malloc((l1 + l2) + 1);
   /*Null Safety check*/

   if (ret == NULL)
      return NULL;
   /*Copy s1*/
   memcpy(ret, s1, l1);
   memcpy(ret + l1,s2, l2);
   ret[(l1 + l2)] = '\0';
   return ret;
}

