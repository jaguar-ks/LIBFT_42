/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:26:18 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/07 18:17:04 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	i = -1;
	d = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!d)
		return (NULL);
	while (s[++i])
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}
