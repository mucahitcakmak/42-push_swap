/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:29:24 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/31 23:11:31 by mucakmak         ###   ########.fr       */
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
	int				lst_max_flag;
}	t_list_ctrl;

// arguman_check.c
void	arg_controller(int arg_size, t_list_ctrl *lctrl, t_list **stack_a, 
			t_list **stack_b);
int		check_sorting(t_list_ctrl *lctrl, t_list *stack_a);
void	add_flag(t_list *stack_a);
t_list	*sort_argument(t_list *sorted_list);
void	eight_argument(t_list_ctrl *lctrl, t_list **stack_a, t_list **stack_b);

// max_argument.c
void	five_hundred_argument(t_list_ctrl *lctrl, t_list **stack_a, 
			t_list **stack_b);
int		loop_size(int lst_max_flag);
void	a_sort_check(t_list **stack_a, t_list **stack_b, int index);
void	b_sort_check(t_list **stack_a, t_list **stack_b, int index);
void	closing(t_list **stack_a, t_list **stack_b);

// min_argument.c
void	five_argument(t_list **stack_a, t_list **stack_b);
void	three_argument(t_list **stack_a);
void	stack_a_edit(t_list **stack_a, t_list **stack_b, int lst_size);
void	stack_b_edit(t_list **stack_a, t_list **stack_b);
int		get_flag_index(t_list *stack_a, int flag);

// three_sort.c
void	solo_three_argument(t_list **stack_a, t_list **stack_b);

// push_swap.c
void	error_message(void);
void	arguman_control(char **argv, int argc, int i);
int		stack_init(t_list **stack_a, char *argv[], int argc);

// rule/
void	push(t_list **src, t_list **dst);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);

void	rotate(t_list	**list);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	reverse_rotate(t_list **list);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

void	swap(t_list **list);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

// utils/
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	count_word(const char *p, char c);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *nptr);
int		ft_atoi_checker(const char *nbr);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new_element);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new_element);
t_list	*ft_lstmap(t_list *lst);
void	ft_lstchange_value(t_list *element_1, t_list *element_2);

#endif