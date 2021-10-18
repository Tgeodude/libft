int ft_sp(char const *s,char c)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = -1;
	while(i++,s[i])
	{
		if(s[i] == c)
			k++;
	}
	return(k);
}

char *ft_word(char const *s, char c)
{
	size_t	i;
	char wrd;

	i = 0;
	while(s[i] != c)
		i++;
	wrd = malloc(i * sizeof(char));
	i = -1;
	while(i++,s[i] != c)
		wrd[i] = s[i];
	return(wrd);
	free(wrd);
}

char **ft_split(char const *s, char c)
{
	size_t	k;
	char **s1;

	k = -1;
	s1 = malloc((ft_sp(s,c) + 1) * sizeof(char));
	while(s[k] <= ft_sp(s,c))
	{
		*s[k] = ft_word(s,c);
	}
}
