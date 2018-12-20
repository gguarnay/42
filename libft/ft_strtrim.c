/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 20:31:43 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/06 17:40:21 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_ws(char const *s)
{
	size_t	i;
	size_t	ws_count;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ws_count = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		ws_count++;
	}
	i = len - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
		ws_count++;
	}
	return (len - ws_count);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	char			*str;
	size_t			len;

	if (!s)
		return (ft_strnew(0));
	len = ft_strlen_ws(s);
	str = ft_strnew(len);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	str = ft_strsub(s, i, len);
	return (str);
}
