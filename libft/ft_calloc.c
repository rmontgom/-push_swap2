/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontgom <rmontgom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:21:48 by rmontgom          #+#    #+#             */
/*   Updated: 2022/04/04 14:50:25 by rmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mass;

	mass = (char *) malloc(count * size);
	if (mass == NULL)
		return (NULL);
	ft_bzero(mass, count * size);
	return (mass);
}
