/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:16:33 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/28 01:42:48 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message()
{
	write(1, "Error\n", 6);
	exit(1);
}

void	stack_init(t_list **stack_a, char *argv[])
{
	int		i;
	t_list	*temp;

	i = -1;
	while (argv[++i])
	{
		temp = ft_lstnew(ft_atoi_checker(argv[i]));
		ft_lstadd_back(stack_a, temp);
	}
}

void	write_list(char *str, t_list *a)
{
	printf("----------------\n");
	printf("%s\n", str);
	while (a)
	{
		printf("%d     -> flag: %d\n", a->content, a->flag);
		a = a->next;
	}
}

int	main(int argc, char *argv[])
{
	t_list_ctrl	*lctrl;
	t_list		*stack_a;
	t_list		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	lctrl = malloc(sizeof(t_list_ctrl));
	if (argc == 1)
		return (0);
	stack_init(&stack_a, argv + 1);
	arg_controller(argc, lctrl, &stack_a, &stack_b);
	write_list("Stack_A", stack_a);
	write_list("Stack_B", stack_b);
	return (0);
}
