/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:56:01 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 23:45:26 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
// int main()
// {
// 	t_list *l = ft_lstnew(NULL);
// 	t_list *f = ft_lstnew("ksouss");
// 	t_list *n = ft_lstnew("fahd");
// 	l->next=NULL;
// 	ft_lstadd_front(&l, f);
// 	for (t_list *cr = l; cr != NULL ; cr = cr->next)
// 		printf("%s", (char *)cr->content);
// }