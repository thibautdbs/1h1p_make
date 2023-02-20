/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdubois <tdubois@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 08:01:57 by tdubois           #+#    #+#             */
/*   Updated: 2023/02/20 13:17:33 by tdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1h1p/bubble.h"

#include <stddef.h>//NULL

#include "libft/libft.h"

void	ft_lstdisplay(t_lst const *lst)
{
	while (lst != NULL)
	{
		ft_putnbr(lst->content);
		ft_putchar('\n');
		lst = lst->next;
	}
}
