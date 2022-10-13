/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:52:08 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 23:53:33 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*r;

	if (!lst || !del || !f)
		return (NULL);
	new = ft_lstnew((f)(lst->content));
	r = new;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew((f)(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&r, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&r, new);
	}
	return (r);
}
