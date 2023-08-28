/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruler.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:06:52 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/28 13:26:53 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*end;

	first = *list;
	end = ft_lstlast(*list);
	*list = (*list)->next;
	end->next = first;
	first->next = NULL;
}

void	ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) < 2)
		return ;
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) < 2)
		return ;
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
