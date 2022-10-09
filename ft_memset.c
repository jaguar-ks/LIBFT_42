/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:02:08 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/05 19:14:40 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *p, int c, size_t len)
{
	int	i;

	i = -1;
	while (++i <= (int)len - 1)
		((char *)p)[i] = (unsigned char)c;
	return (p);
}
