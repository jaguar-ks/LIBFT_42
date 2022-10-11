/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:45:45 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/10 22:08:03 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjma3(char *s, char *d)
{
	int	i;
	int	j;

	i = ft_strlen(d);
	j = -1;
	while (s[++j])
		d[i + j] = s[j];
	d[i + j] = '\0';
	return (d);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;

	d = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!d)
		return (NULL);
	if (s1 && s2)
	{
		d = ft_strjma3((char *)s1, d);
		d = ft_strjma3((char *)s2, d);
	}
	return (d);
}
// int main()
// {
// 	printf("%s", ft_strjoin("", ""));
// }