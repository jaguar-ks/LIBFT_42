/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:57:36 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/09/02 03:28:11 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
// #include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	n-=1;
	while((int)n >= 0)
	{
		((char *)dest)[n] = ((char *)src)[n];
		n--;
	}
	return(dest);
}
int main()
{
	char s[] = "fahdamine";
	ft_memcpy(s,s+4,8);
	printf("%s",s);
}