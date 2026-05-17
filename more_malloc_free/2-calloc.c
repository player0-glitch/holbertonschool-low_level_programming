#include "main.h"
#include <stdlib.h>

/** _calloc- function to allocate  memory using malloc and zero'd out
 * @nmemb: members to be allocated for
 * @size: size of allocated memeory
 *
 * Returns: void * for allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret = NULL;

	if (size < 1 || nmemb < 1)
		return (NULL);
	ret = calloc(nmemb, size);
	if (!ret)
		return (NULL);
	return (ret);
}
