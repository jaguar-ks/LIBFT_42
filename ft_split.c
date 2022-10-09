/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:22:35 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/08 06:15:42 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ch7al_mn_str(char *s, char c)
{
	int	lklmat;
	int	i;

	lklmat = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i +1] != c)
			lklmat++;
		i++;
	}
	return (lklmat);
}

unsigned int	ch7al_mn_harf(char *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] && s[i] != c))
		i++;
	return (i);
}

char	*hz_ht(char *s, char c)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)malloc(sizeof(char) * ch7al_mn_harf(s, c));
	if (!d)
		return (NULL);
	while (s[i] != c && s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	skip_c(char *s, char c)
{
	int	i;

	i = 0;
	if (s[i] == c)
		while (s[i] && s[i] == c)
			i++;
	else
		while (s[i] && s[i] != c)
			i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**r;
	int		n;

	i = -1;
	n = 0;
	r = (char **)malloc(sizeof(char *) * (ch7al_mn_str((char *)s, c) + 1));
	if (!r)
		return (NULL);
	while (++i < ch7al_mn_str((char *)s, c))
	{
		n += skip_c((char *)s + n, c);
		r[i] = hz_ht((char *)s + n, c);
		n += skip_c((char *)s + n, c);
	}
	r[i] = NULL;
	return (r);
}
