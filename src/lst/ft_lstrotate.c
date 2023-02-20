/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdubois <tdubois@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:48:10 by tdubois           #+#    #+#             */
/*   Updated: 2023/02/20 13:17:02 by tdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "1h1p/bubble.h"

#include <stddef.h>//NULL

void	ft_lstrotate(t_lst **plst)
{
	if (*plst == NULL)
		return ;
	ft_lstadd_back(plst, ft_lstpop_front(plst));
}
