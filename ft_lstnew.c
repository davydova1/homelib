/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:48:46 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:48:47 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list		*el;

	if (!(el = (t_list*)malloc(sizeof(*el))))
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}
