/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:46:03 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/28 16:08:35 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solo_three_argument(t_list **stack_a, t_list **stack_b)
{
	t_list	*iter;

	iter = *stack_a;
	if (iter->flag == 2)
	{
		if (iter->next->flag == 1)
			sa(stack_a);
		else if (iter->next->flag == 3)
			rra(stack_a);
	}
	else if (iter->flag == 1 && iter->next->flag == 3)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (iter->flag == 3)
	{
		if (iter->next->flag == 1)
			ra(stack_a);
		else if (iter->next->flag == 2)
		{
			ra(stack_a);
			sa(stack_a);
		}
	}
}
