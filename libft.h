/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:56:35 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/08 06:16:14 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void    *ft_memset(void *p, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *d, const void *s, size_t l);
void	*ft_memcpy(void *d, const void *s, size_t l);
size_t	ft_strlcpy(char	*d, char *s, size_t ds);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *hs, const char *ndl, size_t l);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t c, size_t s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

#endif