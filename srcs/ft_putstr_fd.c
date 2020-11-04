/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:22:59 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 13:22:59 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int i;
	
	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}