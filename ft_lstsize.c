/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:11:16 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/12 22:59:20 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cr;

	i = 0;
	cr = lst;
	while (cr)
	{
		i++;
		cr = cr->next;
	}
	return (i);
}
// int main()
// {
// 	t_list *l1, *l2, *l3;
// 	l1 = ft_lstnew("fahd");
// 	l2 = ft_lstnew("amine");
// 	l3 = ft_lstnew("ksouss");
// 	l1->next = l2;
// 	l2->next = l3;
// 	l3->next = NULL;
// 	printf("%d\n", ft_lstsize(l1));
// }
