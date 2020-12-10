/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvachera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:19:40 by tvachera          #+#    #+#             */
/*   Updated: 2020/11/16 16:19:41 by tvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*element;

	if (alst && *alst)
	{
		element = *alst;
		while (element->next)
			element = element->next;
		element->next = new;
	}
	else
		*alst = new;
}
