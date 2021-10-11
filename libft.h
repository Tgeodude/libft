#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

void ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *buf, int c, size_t len);
char *ft_strchr(const char *string, int symbol);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_touper(int c);

#endif
