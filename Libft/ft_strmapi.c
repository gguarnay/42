/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:22:00 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/06 17:39:22 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (f)
	{
		while (*s)
		{
			str[i] = f(i, *s);
			i++;
			s++;
		}
	}
	str[i] = '\0';
	return (str);
}
