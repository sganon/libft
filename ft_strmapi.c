/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:41:36 by sganon            #+#    #+#             */
/*   Updated: 2015/11/26 19:37:10 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*dest;

	dest = ft_strdup(s);
	if (s && f && dest != NULL)
	{
		i = 0;
		while (dest[i])
		{
			dest[i] = f(i, dest[i]);
			i++;
		}
		return (dest);
	}
	return (NULL);
}
