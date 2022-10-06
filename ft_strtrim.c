/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:37:19 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:29:21 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

int kayn(char *s, char c)
{
    int i=-1;
    while(s[++i])
    {
        if(s[i] == c)
            return 1;
        i++;
    }
    return 0;
}
char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int i=0;
    unsigned int j=ft_strlen((char *)s1) - 1;
    unsigned int t=0;
    char *r;
    while(s1[i] && kayn((char *)set,s1[i]))
        i++;
    while(s1[j] && kayn((char *)set, s1[j]))
        j--;
    r = (char *)malloc(j-i+1);
    while(i <= j)
        r[t++] = s1[i++];
    r[t] = 0;
    return r;
}
// int main()
// {
//     char *f="fahd amine ksouss";
//     printf("%s",ft_strtrim(f,"fas"));
// }