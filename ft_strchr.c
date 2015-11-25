/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:44:50 by sganon            #+#    #+#             */
/*   Updated: 2015/11/24 13:18:01 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	j = 0;
	dest = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i])
			{
				dest[j] = s[i];
				i++;
				j++;
			}
			dest[j] = 0;
			return (dest);
		}
		else
			i++;
	}
	return (NULL);
}
