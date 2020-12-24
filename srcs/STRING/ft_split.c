/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:20:15 by tvachera          #+#    #+#             */
/*   Updated: 2020/11/16 16:20:17 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	get_word_size(char const *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i + 1);
}

static void	fill_tab(char **tab, char const *str, char c, unsigned int count)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (i < count)
	{
		k = 0;
		while (str[j] && str[j] == c)
			j++;
		if (!(tab[i] = malloc(sizeof(char) * get_word_size(str + j, c))))
			return ;
		while (str[j] && str[j] != c)
		{
			tab[i][k] = str[j];
			k++;
			j++;
		}
		tab[i][k] = 0;
		i++;
	}
	tab[i] = 0;
}

char		**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (!s)
	{
		if (!(tab = malloc(sizeof(char *))))
			return (0);
		tab[0] = 0;
		return (tab);
	}
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		s[i] ? count++ : 0;
		while (s[i] != c && s[i])
			i++;
	}
	if (!(tab = malloc(sizeof(char *) * count + 1)))
		return (0);
	fill_tab(tab, s, c, count);
	return (tab);
}
