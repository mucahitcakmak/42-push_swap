/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:25:45 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/27 17:34:56 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	swap(t_list **list)
{
	t_list	*temp;

	if (ft_lstsize(*list) < 2)
		return ;
	temp = (*list)->next;
	(*list)->next = temp->next;
	temp->next = (*list);
	*list = temp;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
