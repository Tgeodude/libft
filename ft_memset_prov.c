#include <stdio.h>
int main ()
{
	unsigned char src[10]="helloworld";

	// Заполняем массив символом ‘1’
	ft_memset(src, '1', 3);

	// Вывод массива src на консоль
	printf("src: %s\n",src);

	return (0);
}

