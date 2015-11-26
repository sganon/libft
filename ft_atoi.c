/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:50:27 by sganon            #+#    #+#             */
/*   Updated: 2015/11/26 11:08:20 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	negative;
	int	i;
	int	return_value;

	i = 0;
	negative = 0;
	return_value = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = 1;
		i++;
	}
	while (ft_isdigit(nptr[i]) != 0)
	{
		return_value = (return_value * 10) - (nptr[i] - '0');
		i++;
	}
	if (!negative)
		return_value = -return_value;
	return (return_value);
}
