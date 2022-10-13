/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:26:01 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/13 02:05:11 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// int main()
// {
// 	t_list *r1, *r2, *r3, *cr;
// 	r1 = ft_lstnew("fahd");
// 	r2 = ft_lstnew("amine");
// 	r3 = ft_lstnew("ksouss");
// 	ft_lstadd_back(&r1,r2);
// 	ft_lstadd_back(&r2,r3);
// 	cr = r1;
// 	while (cr != NULL)
// 	{
// 		printf("%s\n", (char *)cr->content);
// 		cr = cr->next;
// 	}
// 	ft_lstdelone(&r2, free);
// 	cr = r1;
// 	while (cr != NULL)
// 	{
// 		printf("%s\n", (char *)cr->content);
// 		cr = cr->next;
// 	}
// }