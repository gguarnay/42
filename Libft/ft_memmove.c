/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:48:28 by gguarnay          #+#    #+#             */
/*   Updated: 2018/11/30 20:39:36 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	*tmp;

	tmp = (unsigned char *)malloc(sizeof(*tmp) * (len + 1));
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	ft_memcpy(tmp, p2, len);
	ft_memcpy(p1, tmp, len);
	free(tmp);
	return (dst);
}
