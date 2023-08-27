/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:05:32 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/24 20:26:58 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*start;
	t_list	*temp;

	if (!del)
		return ;
	start = *lst;
	while (start)
	{
		temp = start;
		del(temp->content);
		start = start->next;
		free(temp);
	}
	*lst = NULL;
}
