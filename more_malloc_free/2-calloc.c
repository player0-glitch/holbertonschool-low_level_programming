#include "main.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/** _calloc- function to allocate  memory using malloc and zero'd out
 * @nmemb: members to be allocated for
 * @size: size of allocated memeory
 *
 * Returns: void * for allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	uint8_t *ret;

	unsigned int i;

	if (size < 1 || nmemb < 1)
		return (NULL);
	ret = (uint8_t *)malloc(nmemb * sizeof(size));
	if (!ret)
		return (NULL);

	/*since we can't use calloc*/
	for (i = 0; i < nmemb; i++)
		ret[i] = 0;

	/*we need to return a void*)*/
	ret = (void *)ret;
	return (ret);
}
