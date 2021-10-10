#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)s;
	while (n-- > 0)
		tmp[n] = 0;
}
int main ()
{
	unsigned char src[10]="helloworld";
	ft_bzero(src, 3);
	printf("src: %s\n",src);
}
