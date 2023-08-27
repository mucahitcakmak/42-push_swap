/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguman_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:44:44 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/25 10:17:25 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_controller(int argc, t_list_ctrl *lctrl, t_list **stack_a, t_list **stack_b)
{
	add_flag(*stack_a); // flagleri ekle
	check_sorting(lctrl, *stack_a); // argümanlar sıralıysa işlem yapmadan programdan çık
	if (argc == 4)
		three_argument(stack_a);
	// else if (argc <= 500)
	// 	five_hundred_argument(stack_a, stack_b);
}

int	check_sorting(t_list_ctrl *lctrl, t_list *stack_a)
{
	int	i;
	int	min;
	int	flag;

	i = 0;
	min = stack_a->content;
	flag = 0;
	while (stack_a)
	{
		if (min > stack_a->content)
			min = stack_a->content;
		if (stack_a->next != NULL && stack_a->content > stack_a->next->content)
			flag++;
		stack_a = stack_a->next;
		i++;
	}
	lctrl->lst_size = i;
	lctrl->lst_min = min;
	if (flag > 0)
		return (0);
	exit(0); 
}

int	add_flag(t_list *stack_a)
{
	int	flag;
	t_list *a_start_pos;
	t_list *sorted_list;

	flag = 1;
	a_start_pos = stack_a;
	sorted_list = sort_argument(ft_lstmap(stack_a)); // sıralanmış kopya liste oluştur
	write_list("SIRALANMIŞ LİSTE", sorted_list);
	while (sorted_list)
	{
		stack_a = a_start_pos;
		while (stack_a)
		{
			if (stack_a->flag == 0 && sorted_list->content == stack_a->content)
				stack_a->flag = flag++;
			stack_a = stack_a->next;
		}
		sorted_list = sorted_list->next;
	}
}

t_list	*sort_argument(t_list *sorted_list)
{
	t_list	*iter;
	t_list	*start_pos;

	start_pos = sorted_list;
	while (start_pos)
	{
		iter = start_pos->next;
		while (iter)
		{
			if (start_pos->content == iter->content)
				error_message();
			if (start_pos->content > iter->content)
				ft_lstchange_value(start_pos, iter);
			iter = iter->next;
		}
		start_pos = start_pos->next;
	}
	return (sorted_list);
}
