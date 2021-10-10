size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t k;

	k = -1;
	while(k++ < size -1 && src[k] != \0)
		dst[k] = src[k];
	dst[k] = 0;
	return(k);
}
