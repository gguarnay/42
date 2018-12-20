/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 12:27:05 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/08 23:44:13 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	i = -1;
	while (++i < size)
		s[i] = '\0';
	s[size] = '\0';
	return (s);
}
