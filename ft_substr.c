/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:54:28 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:30:13 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *d;
    d = (char *)malloc(len + 1);
    if(!d)
        return NULL;
    if (s[start] != 0)
        d = (char *)s + start;
    d[len] = '\0';
    return d;
}
// int main()
// {
//     char r[] = "fahd amine ksouss";
//     printf("%s", ft_substr(r,5,5));
// }