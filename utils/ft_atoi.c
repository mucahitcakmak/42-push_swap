/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:29:27 by mucakmak          #+#    #+#             */
/*   Updated: 2023/08/31 16:35:17 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

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
		if (result * sign > 2147483647 || result * sign < -2147483648)
			error_message();
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
	if ((nbr [i] == '+' || nbr[i] == '-'))
	{
		if (('0' <= nbr[i + 1] && '9' >= nbr[i + 1]))
			i++;
		else
			error_message();
	}
	while (nbr[i])
	{
		while ((nbr[i] == ' ') || (nbr[i] == '\t') || (nbr[i] == '\r')
			|| (nbr[i] == '\v') || (nbr[i] == '\f') || (nbr[i] == '\n'))
			i++;
		if (!('0' <= nbr[i] && '9' >= nbr[i]) || nbr [i] == '+' 
			|| nbr[i] == '-')
			error_message();
		i++;
	}
	return (ft_atoi(nbr));
}
