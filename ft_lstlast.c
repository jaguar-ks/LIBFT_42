/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:18:25 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 01:50:39 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list *l1, *l2, *l3;
// 	l1 = ft_lstnew("fahd");
// 	l2 = ft_lstnew("amine");
// 	l3 = ft_lstnew("ksouss");
// 	ft_lstadd_front(&l3,l2);
// 	ft_lstadd_front(&l2,l1);
// 	printf("%s", (char *)ft_lstlast(l1)->content);
// }
