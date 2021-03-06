/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontgom <rmontgom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:21:48 by rmontgom          #+#    #+#             */
/*   Updated: 2022/04/04 14:37:58 by rmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dict, const void *str, size_t n)
{
	size_t	i;
	char	*dict2;
	char	*str2;

	i = 0;
	dict2 = (char *)dict;
	str2 = (char *)str;
	if (str2 == NULL && dict2 == NULL)
		return (0);
	while (i < n)
	{
		dict2[i] = str2[i];
		i++;
	}
	return (dict);
}
