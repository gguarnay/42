/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguarnay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:52:21 by gguarnay          #+#    #+#             */
/*   Updated: 2018/12/07 19:15:34 by gguarnay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!(*alst) || !(alst))
		return ;
	if (!(*alst)->next)
		ft_lstdel(alst, del);
	ft_lstdelone(alst, del);
}
