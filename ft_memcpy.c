/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:13:23 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/06 18:18:18 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *d, const void *s, size_t l)
{
	int	i;

	i = -1;
	while (++i <= (int)l - 1)
			((char *)d)[i] = ((char *)s)[i];
	return (d);
}
// int main()
// {
// 	char *d = "feen azbi";
// 	char *t = NULL;
// 	printf("%s", ft_memcpy(d, t , 4));
// }