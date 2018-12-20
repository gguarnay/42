/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:00:41 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/06 17:38:53 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (f)
	{
		while (*s)
		{
			str[i] = f(*s);
			i++;
			s++;
		}
	}
	str[i] = '\0';
	return (str);
}
