size_t ft_strlcat(char * dst, const char * src, size_t size)
{
	size_t i;
	size_t j;

	j = ft_strlen(dst);
	while(dst)
		*dst++;
	while(i++, src[i])
		dst[i] = src[i];
	return((ft_strlen(src)) + j);
}

