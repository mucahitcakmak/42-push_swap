/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:01:21 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/27 17:03:15 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new_element)
{
	if (!(*lst))
	{
		*lst = new_element;
		return ;
	}
	ft_lstlast(*lst)->next = new_element;
}
