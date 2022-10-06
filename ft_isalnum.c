/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:14:24 by fahd              #+#    #+#             */
/*   Updated: 2022/10/06 06:18:22 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_isalnum(int c)
{
    return(ft_isalpha(c) || ft_isdigit(c));
}
/*int main()
{
    char c = '9';
    printf("%d", ft_isalnum(c));
}*/