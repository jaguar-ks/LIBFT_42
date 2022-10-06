/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:31:55 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/09/02 03:21:53 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include"libft.h"
#include<string.h>
#include<stdio.h>
// void *ft_memcpy(void *dest, const void *src, size_t n);
// void    *ft_memmove(void *dest, const void *src, size_t n)
// {
//     ft_memcpy(dest, src, n);
//     return dest;
// }
int main()
{
    char s[] = "fahdamine";
    // char d[] = "ksouss fahd amine";
    memmove(s,s+4,8);
    printf("%s",s);
} 