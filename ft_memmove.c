/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:53:13 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/06 10:58:21 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *d, const void *s, size_t l)
{
	int		i;
	char	t[sizeof(s)];

	i = -1;
	while (++i <= (int)l - 1)
		t[i] = ((char *)s)[i];
	i = -1;
	while (++i <= (int)l - 1)
		((char *)d)[i] = t[i];
	return (d);
}
