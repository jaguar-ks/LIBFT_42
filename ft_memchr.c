/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:03:29 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:22:00 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

void    *ft_memchr(void *s, int c, size_t n)
{
    unsigned int i=0;
    while(i < (unsigned int)n)
    {
        if(((unsigned char *)s)[i] == ((unsigned char)c))
            return (s+i);
        else
            i++;
    }
    return NULL;
}
// int main()
// {
//     char *s="fahdamineksouss";
//     char *p;
//     p =  ft_memchr(s,'k',15);
//     printf("%s", p);
// }