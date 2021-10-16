#include <stdio.h>
#include <stdlib.h>

void * ft_calloc( size_t number, size_t size )
{
	unsigned char *array;
	size_t i;

	i = -1;
	array = malloc(size * number);
	while(i++ < size)
		array[i] = '1';
	return(array);
}
