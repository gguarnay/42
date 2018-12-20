/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:42:11 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/15 22:06:38 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *s)
{
	int	r;
	int	sign;

	r = 0;
	sign = 1;
	while (*s == ' ' || *s == '\n' || *s == '\t' ||
			*s == '\v' || *s == '\f' || *s == '\r')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		r = r * 10 + (*s - '0');
		s++;
	}
	return (r * sign);
}
