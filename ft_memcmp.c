/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:18:12 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:22:42 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int i = 0;
    if(n == 0)
        return 0;
    while(i < n)
    {
        if(((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        else
            i++;
    }
    return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
// int main()
// {
//     char *s1="JhA";
//     char *s2="tha";
//     printf("%d", ft_memcmp(s1,s2,0));
// }