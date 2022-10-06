/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:05:23 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:23:32 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	int i = -1;
	while(++i <= (int)n-1)
		((char *)ptr)[i] = c;
	return ptr;
}
/*int main()
{
	char *a;
	char c[] = "fahd amine";
	a = ft_memset(c,65,4);
	printf("%s", a);
}*/
