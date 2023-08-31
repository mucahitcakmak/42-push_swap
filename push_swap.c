/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:16:33 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/31 23:10:16 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	arguman_control(char **argv, int argc, int i)
{
	int	j;

	j = 0;
	while ((9 <= argv[i][j] && argv[i][j] <= 13) || argv[i][j] == ' ')
		j++;
	if (argv[i][j] == '\0' && j == 0)
		error_message();
	else if (argv[i][j] == '\0' && argc == 2)
		exit(0);
}

int	stack_init(t_list **stack_a, char *argv[], int argc)
{
	int		i;
	int		j;
	int		arg_size;
	t_list	*temp;
	char	**array;

	i = -1;
	arg_size = 0;
	while (argv[++i])
	{
		arguman_control(argv, argc, i);
		array = ft_split(argv[i], ' ');
		j = -1;
		while (++j < count_word(argv[i], ' '))
		{
			arg_size++;
			temp = ft_lstnew(ft_atoi_checker(array[j]));
			ft_lstadd_back(stack_a, temp);
			free(array[j]);
		}
		free(array);
	}
	return (arg_size);
}

int	main(int argc, char *argv[])
{
	int			arg_size;
	t_list_ctrl	*lctrl;
	t_list		*stack_a;
	t_list		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	lctrl = malloc(sizeof(t_list_ctrl));
	if (argc == 1)
		return (0);
	arg_size = stack_init(&stack_a, argv + 1, argc);
	arg_controller(arg_size, lctrl, &stack_a, &stack_b);
	return (0);
}
