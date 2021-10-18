#include "libft.h"

char *ft_strchr(const char *string, int symbol)
{
	unsigned char tmp;

	tmp = symbol;
	while (*string)
	{
		if(*string == tmp)
			return (char *)string;
		string++;
	}
	if(symbol == '\0')
		return (char *)(string + ft_strlen(string));
	return(0);
}
