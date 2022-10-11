/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:41:33 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/10 21:23:45 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned int	i;

	d = ft_calloc(len, sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		d[i] = 0;
	while (start <= ft_strlen(s) && i < len)
		d[i++] = s[start++];
	d[i] = '\0';
	return (d);
}
// int main()
// {
// 	char *s = ft_substr("tripouille", 100, 1);
// 	printf("%s\n", s);
// }