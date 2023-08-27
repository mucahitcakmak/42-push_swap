/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:53:10 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/24 20:27:49 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstmap(t_list *lst)
{
	t_list	*new_list;
	t_list	*new_element;

	if (lst == NULL)
		return (NULL);
	new_list = 0;
	while (lst != NULL)
	{
		new_element = ft_lstnew(lst->content);
		if (new_element == NULL)
			return (NULL);
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
