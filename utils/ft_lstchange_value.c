#include "../push_swap.h"

void    ft_lstchange_value(t_list *element_1, t_list *element_2)
{
    int temp;

    temp = element_1->content;
    element_1->content = element_2->content;
    element_2->content = temp;
}
