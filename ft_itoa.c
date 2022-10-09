/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:25:40 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/07 23:25:53 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	tol(long int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*khchih(long int n, char *r, int l)
{
	r[l] = 0;
	while (--l >= 0)
	{
		if (n == 0)
			break ;
		r[l] = (n % 10) + 48;
		n /= 10;
	}
	return (r);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*r;
	long int	nb;

	nb = n;
	if (nb < 0)
		nb *= -1;
	i = tol(nb);
	r = (char *)malloc(sizeof(char) * i + 2);
	if (!r)
		return (NULL);
	nb = n;
	if (nb >= 0 && nb < 10)
		r[0] = nb + 48;
	if (nb > 9)
		r = khchih(nb, r, i);
	else if (nb < 0)
	{
		r[0] = '-';
		r = khchih(-nb, r, i + 1);
	}
	return (r);
}
