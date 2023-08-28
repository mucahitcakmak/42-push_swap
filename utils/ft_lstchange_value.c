/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchange_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:27:33 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/28 13:28:58 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstchange_value(t_list *element_1, t_list *element_2)
{
	int	temp;

	temp = element_1->content;
	element_1->content = element_2->content;
	element_2->content = temp;
}
