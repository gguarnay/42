/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 01:33:29 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/08 23:04:59 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*hn[2];
	long		flag;

	hn[0] = haystack;
	hn[1] = needle;
	flag = 0;
	while (*(hn[0]) && *(hn[1]))
	{
		if (*(hn[0]) != *(hn[1]))
		{
			if (!(*(hn[0] + 1)))
				break ;
			hn[1] = needle;
			flag = 0;
		}
		if (*(hn[0]) == *(hn[1]) && flag == 0)
		{
			flag = 1;
			haystack = hn[0];
		}
		if (*(hn[0]) == *(hn[1]))
			hn[1]++;
		hn[0]++;
	}
	return (!(*hn[1]) ? (char *)haystack : NULL);
}
