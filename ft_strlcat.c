/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:53:48 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:26:35 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ds;
	unsigned int	ss;

	i = 0;
	j = 0;
	ds = 0;
	ss = 0;
	while (dest[ds])
		ds++;
	while (src[ss])
		ss++;
	if (size <= ds)
		return (size + ss);
	j = size - ds - 1;
	while (src[i] && i < j)
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (ds + ss);
}