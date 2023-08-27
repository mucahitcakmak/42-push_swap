/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:29:24 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/25 09:10:21 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				flag;
	struct s_list	*next;
}	t_list;

typedef struct s_list_ctrl
{
	int				lst_min;
	int				lst_size;
}	t_list_ctrl;

// arguman_check.c
void	arg_controller(int argc, t_list_ctrl *lctrl, t_list **stack_a, t_list **stack_b);
int		check_sorting(t_list_ctrl *lctrl, t_list *stack_a);
int		add_flag(t_list *stack_a);
t_list	*sort_argument(t_list *sorted_list);

// max_argument.c
int five_hundred_argument(t_list **stack_a, t_list **stack_b);

// min_argument.c
void	three_argument(t_list **stack_a);

// push_swap.c
void	error_message();
void	stack_init(t_list **stack_a, char *argv[]);
void	write_list(char *str, t_list *a);

// rule/rulep.c
void	push(t_list **src, t_list **dst);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);

// rule/ruler.c
void	rotate(t_list	**list);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

// rule/rulerr.c
void	reverse_rotate(t_list **list);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// rule/rules.c
void	del(int nbr);
void	swap(t_list **list);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

// utils/
int	ft_atoi(const char *nptr);
int	ft_atoi_checker(const char *nbr);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst, void (*del)(int));
void	ft_lstiter(t_list *lst, void (*f)(int));
t_list	*ft_lstmap(t_list *lst);
void    ft_lstchange_value(t_list *element_1, t_list *element_2);


#endif