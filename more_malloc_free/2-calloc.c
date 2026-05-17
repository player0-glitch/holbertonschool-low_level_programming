#include "main.h"
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
	void *ret = NULL;

	if (size < 1 || nmemb < 1)
		return (NULL);
	ret = malloc(nmemb * sizeof(size));
	if (!ret)
		return (NULL);

	/*since we can't use calloc*/
	memset(ret, 0, size);
	return (ret);
}
