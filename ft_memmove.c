#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp_0;
	unsigned char *tmp_1;

	size_t c;

	c = -1;
	if(src < dest)
		ft_memcpy(dest, src, n);
	else
	{
		tmp_0 = (unsigned char *)dest;
		tmp_1 = (unsigned char *)src;
		c = -1;
		while(c++ < n)
			*tmp_0++ = *tmp_1++;
	}
	return (tmp_0);
}
int main ()
{
  char str1[] = "Пример строки";
  char str2[40];
  char str3[60];
  ft_memmove(str2, str1, 30);
  ft_memmove(str3, "Копирование успешно выполнено",60);

  printf("%s\n",str1);
  printf("%s\n",str2);
  printf("%s\n",str3);
}
