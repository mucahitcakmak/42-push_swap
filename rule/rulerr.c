/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulerr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:36:56 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/25 08:40:36 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **list)
{
	t_list	*endbutone;
	t_list	*end;

	endbutone = *list;
	while (endbutone->next->next)
		endbutone = endbutone->next;
	end = ft_lstlast(*list);
	end->next = *list;
	*list = end;
	endbutone->next = NULL;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
