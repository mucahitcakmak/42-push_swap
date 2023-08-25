/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:36:08 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/25 10:17:38 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_controller(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 4)
		three_argument(stack_a, stack_b);
}

void	three_argument(t_list **stack_a, t_list **stack_b)
{
	t_list	*last;

	last = ft_lstlast(*stack_a);
	if ((*stack_a)->content < last->content)
		ra(stack_a);
	while ((*stack_a)->content > last->content)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a);
		rra(stack_a);
	}
	exit(0);
}
