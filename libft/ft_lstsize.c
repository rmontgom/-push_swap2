/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontgom <rmontgom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:21:48 by rmontgom          #+#    #+#             */
/*   Updated: 2022/04/04 14:37:37 by rmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*iterator;
	int		i;

	i = 0;
	iterator = lst;
	while (iterator != NULL)
	{
		iterator = iterator -> next;
		i++;
	}
	return (i);
}
