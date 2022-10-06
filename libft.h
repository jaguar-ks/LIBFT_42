#ifndef LIBFT_H
#define LIBFT_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_atoi(const char *str);
void    ft_bzero(void  *s, size_t n);
void    *ft_calloc(size_t ne, size_t nb);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_itoa(int n);
void    *ft_memchr(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(const char *s);
char    *ft_strjoin(char const *s1, char const *s2);
int	ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strlcpy(char d,char s);
size_t	ft_strlen(char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(char *s, int ch);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
void	ft_putchar_fd(char c, int fd);
char	**ft_split(char const *s, char c);

#endif