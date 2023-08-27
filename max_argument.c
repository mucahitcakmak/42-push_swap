#include "push_swap.h"

int five_hundred_argument(t_list_ctrl *lctrl, t_list **stack_a, t_list **stack_b)
{
    int i;
    int max_bit_size;

    i = 0;
    max_bit_size = loop_size(lctrl->lst_max_flag);
    while (i < max_bit_size)
    {
        a_sort_check(stack_a, stack_b, i);
        i++;
        b_sort_check(stack_a, stack_b, i);
    }
    closing(stack_a, stack_b);
}

int    loop_size(int lst_max_flag)
{
    int i;
    int where_is_bit;

    i = 0;
    where_is_bit = 0;
    while (i < sizeof(int) * 8)
    {
        if ((lst_max_flag >> i) & 1)
            where_is_bit = i + 1;
        i++;
    }
    return (where_is_bit);
}

void    a_sort_check(t_list **stack_a, t_list **stack_b, int index)
{
    t_list  *stack_a_clone;

    stack_a_clone = ft_lstmap(*stack_a);
    while (stack_a_clone)
    {
        if (((*stack_a)->flag >> index) & 1)
            ra(stack_a);
        else
            pb(stack_a, stack_b);
        stack_a_clone = stack_a_clone->next;
    }
}

void    b_sort_check(t_list **stack_a, t_list **stack_b, int index)
{
    t_list  *stack_b_clone;

    stack_b_clone = ft_lstmap(*stack_b);
    while (stack_b_clone)
    {
        if (((*stack_b)->flag >> index) & 1)
           pa(stack_a, stack_b);
        else
            rb(stack_b);
        stack_b_clone = stack_b_clone->next;
    }
}

void    closing(t_list **stack_a, t_list **stack_b)
{
    t_list  *stack_b_clone;

    stack_b_clone = ft_lstmap(*stack_b);
    while (stack_b_clone)
    {
        pa(stack_a, stack_b);
        stack_b_clone = stack_b_clone->next;
    }
}