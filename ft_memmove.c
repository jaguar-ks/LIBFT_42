/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:53:13 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 23:53:17 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *d, const void *s, size_t l)
{
	int		i;

	if (d < s)
	{
		i = -1;
		while (++i <= (int)l - 1)
			((char *)d)[i] = ((char *)s)[i];
	}
	if (s < d)
	{
		i = l;
		while (--i >= 0)
			((char *)d)[i] = ((char *)s)[i];
	}
	return (d);
}
