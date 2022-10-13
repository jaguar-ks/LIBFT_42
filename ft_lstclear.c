/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:46:08 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 02:05:45 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tl;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tl = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tl;
	}	
}
