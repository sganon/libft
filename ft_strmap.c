/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:34:24 by sganon            #+#    #+#             */
/*   Updated: 2015/11/25 15:17:17 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dest;

	i = 0;
	dest = ft_strdup(s);
	if (s && f && dest != NULL)
	{
		while (dest[i])
		{
			dest[i] = f(dest[i]);
			i++;
		}
		return (dest);
	}
	return (NULL);
}
