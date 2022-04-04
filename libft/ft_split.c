/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontgom <rmontgom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:21:48 by rmontgom          #+#    #+#             */
/*   Updated: 2022/04/04 14:38:48 by rmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *str, char delim)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != delim && str[i + 1] == delim)
			|| (str[i] != delim && str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(char *word, char delim)
{
	int	count;

	count = 0;
	while (word[count] != delim && word[count] != '\0')
	{
		count++;
	}
	return (count);
}

static void	*free_mem(char **mem)
{
	int	i;

	i = 0;
	while (mem[i] != NULL)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
	return (NULL);
}

static char	**logic(char const *s, char c, char	**mem)
{
	int	i;
	int	j;
	int	wlen;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wlen = word_len((char *)(s + i), c);
			mem[j] = ft_substr(&s[i], 0, wlen);
			if (mem[j] == NULL)
				return (free_mem(mem));
			i += (wlen - 1);
			j++;
		}
		i++;
	}
	mem[j] = NULL;
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;

	if (s == NULL)
		return (NULL);
	mem = (char **)malloc(sizeof(char *) * (word_count((char *)s, c) + 1));
	if (mem == NULL)
		return (NULL);
	return (logic(s, c, mem));
}
