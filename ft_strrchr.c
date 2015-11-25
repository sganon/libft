/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:50:05 by sganon            #+#    #+#             */
/*   Updated: 2015/11/24 20:41:58 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*dest;
	int		j;

	i = ft_strlen(s);
	j = 0;
	dest = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	while (i >= 0)
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
			i--;
	}
	return (NULL);
}
