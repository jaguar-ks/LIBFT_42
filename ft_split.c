/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 00:13:00 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:33:40 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ch7al_mn_str(char *s, char c)
{
	int	lklmat;
	int	i;

	lklmat = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			lklmat++;
			s[i] = 0;
		}
		i++;
	}
	return (lklmat);
}

int	ch7al_mn_harf(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*hez_het(char *d, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}

int	tali(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		i;
	char	**r;

	n = 0;
	i = 0;
	r = (char **)malloc(sizeof(char *) * (ch7al_mn_str((char *)s, c) + 2));
	if (r == NULL)
		return (NULL);
	while (i <= ch7al_mn_str((char *)s, c))
	{
		r[i] = (char *)malloc(
				sizeof(char) * (ch7al_mn_harf((char *)s + n) + 1));
		if (r[i] == NULL)
			return (NULL);
		r[i] = hez_het(r[i], (char *)s + n);
		n += tali((char *)s + n);
		i++;
	}
	r[i] = NULL;
	while (i >= 0)
		free(r[i--]);
	free(r);
	return (ar);
}
// int main()
// {
// 	char **r=ft_split("jbdt lhbiba mn t9acher bdit nbacher", ' ');
// 	int i=0;
// 	while(r[i] != NULL)
// 		printf("%s\n", r[i++]);
// }