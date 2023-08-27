/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:29:27 by mucakmak          #+#    #+#             */
/*   Updated: 2023/07/12 11:44:44 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\t') || (nptr[i] == '\r')
		|| (nptr[i] == '\v') || (nptr[i] == '\f') || (nptr[i] == '\n'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign = -1;
	while ('0' <= nptr[i] && '9' >= nptr[i])
	{
		result = (10 * result) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_atoi_checker(const char *nbr)
{
	int	i;

	i = 0;
	while ((nbr[i] == ' ') || (nbr[i] == '\t') || (nbr[i] == '\r')
		|| (nbr[i] == '\v') || (nbr[i] == '\f') || (nbr[i] == '\n'))
		i++;
	if (nbr [i] == '+' || nbr[i] == '-')
		i++;
	while (nbr[i])
	{
		if (!('0' <= nbr[i] && '9' >= nbr[i]))
			error_message();
		i++;
	}
	return (ft_atoi(nbr));
}
