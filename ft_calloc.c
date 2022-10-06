/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 06:00:53 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:18:12 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void    *ft_calloc(size_t ne, size_t nb)
{
    void    *p;
    p = malloc(ne * nb);
    if(!p)
        return NULL;
    ft_bzero(p,(ne*nb));
    return p;
}