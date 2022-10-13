/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:27:40 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 04:58:26 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		if (((unsigned char *)s)[i++] == (unsigned char)c)
			return ((unsigned char *)s + i - 1);
	return (NULL);
}
// int main()
// {
// 	char s[] = {0,1,2,3,4,5};
// 	printf("%s\n%s", memchr(s, 2+256, 3),ft_memchr(s, 2+256, 3));
// }
