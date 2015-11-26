/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:44:28 by sganon            #+#    #+#             */
/*   Updated: 2015/11/26 19:52:24 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int 	i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (dest == NULL)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		dest[i] = s1[i];
		i++;
	}
	while (i <= ft_strlen(s1) + ft_strlen(s2))
	{
		dest[i] = s2[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
