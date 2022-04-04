/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontgom <rmontgom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:21:48 by rmontgom          #+#    #+#             */
/*   Updated: 2022/04/04 14:37:15 by rmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mem;
	t_list	*tmp;

	tmp = NULL;
	while (lst)
	{
		mem = ft_lstnew((*f)(lst->content));
		if (mem == NULL)
		{
			ft_lstclear(&tmp, (*del));
			return (NULL);
		}
		ft_lstadd_back(&tmp, mem);
		lst = lst->next;
	}
	return (tmp);
}
