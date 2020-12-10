/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:20:35 by tvachera          #+#    #+#             */
/*   Updated: 2020/11/16 16:34:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	c_bis;

	i = ft_strlen(s);
	c_bis = (char)c;
	if (c == 0)
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == c_bis)
			return ((char *)s + i);
	}
	return (0);
}
