/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:50:22 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/09/07 21:36:42 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include"libft.h"

char    *ft_strjma3(char *s, char *d)
{
    int i=ft_strlen(d);
    int j=-1;
    while(s[++j])
        d[i+j] = s[j];
    d[i+j] = '\0';
    return d;
}
char    *ft_strjoin(char const *s1, char const *s2)
{
    char *s;
    s = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
    if(!s)
        return NULL;
    s[0] = '\0';
    s = ft_strjma3((char *)s1, s);
    s = ft_strjma3((char *)s2, s);
    return s;
}
// int main()
// {
//     char *s1 = "hamoda l3raj";
//     char *s2 = NULL;
//     printf("%s", ft_strjoin(s1,s2));
// }