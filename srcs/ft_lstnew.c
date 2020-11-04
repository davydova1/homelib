/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:10:02 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:48:50 by llemmiwi         ###   ########.fr       */
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
