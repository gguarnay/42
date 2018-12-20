/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 23:17:52 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/08 23:41:32 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*n;

	n = ft_strnew(len);
	n = (char *)ft_memcpy(n, needle, len);
	return (ft_strstr(haystack, n));
}
