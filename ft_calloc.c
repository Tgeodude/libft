#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void * ft_calloc( size_t number, size_t size )
{
	unsigned char *array;
	size_t i;

	i = -1;
	array = malloc(size * number);
	while(i++,i < size)
		array[i] = '0';
	return(array);
}
