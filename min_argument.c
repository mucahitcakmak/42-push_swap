/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:36:08 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/28 14:44:22 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_argument(t_list **stack_a, t_list **stack_b)
{
	int	lst_size;

	lst_size = ft_lstsize(*stack_a);
	stack_a_edit(stack_a, stack_b, lst_size);
	stack_b_edit(stack_a, stack_b);
}

void	three_argument(t_list **stack_a)
{
	t_list	*iter;

	iter = *stack_a;
	if (iter->flag == 4)
	{
		if (iter->next->flag == 3)
			sa(stack_a);
		else if (iter->next->flag == 5)
			rra(stack_a);
	}
	else if (iter->flag == 3 && iter->next->flag == 5)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (iter->flag == 5)
	{
		if (iter->next->flag == 3)
			ra(stack_a);
		else if (iter->next->flag == 4)
		{
			ra(stack_a);
			sa(stack_a);
		}
	}
}

void	stack_a_edit(t_list **stack_a, t_list **stack_b, int lst_size)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	j = 0;
	while (j++ < lst_size - 2)
	{
		lst_size = ft_lstsize(*stack_a);
		temp = get_flag_index(*stack_a, i++);
		if (temp <= lst_size / 2)
		{
			while (--temp)
				ra(stack_a);
			pb(stack_a, stack_b);
		}
		else
		{
			temp = lst_size - temp + 1;
			while (temp--)
				rra(stack_a);
			pb(stack_a, stack_b);
		}
	}
	three_argument(stack_a);
}

void	stack_b_edit(t_list **stack_a, t_list **stack_b)
{
	int		b_lst_size;
	t_list	*temp_stack_a;
	t_list	*temp_stack_b;

	b_lst_size = ft_lstsize(*stack_b);
	temp_stack_a = *stack_a;
	temp_stack_b = *stack_b;
	if (temp_stack_a->content > temp_stack_a->next->content)
		ra(stack_a);
	while (b_lst_size--)
		pa(stack_a, stack_b);
}

int	get_flag_index(t_list *stack_a, int flag)
{
	int		index;
	t_list	*iter;

	index = 0;
	iter = stack_a;
	while (iter)
	{
		if (iter->flag == flag)
			break ;
		index++;
		iter = iter->next;
	}
	return (index + 1);
}
