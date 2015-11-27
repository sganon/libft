/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:44:28 by sganon            #+#    #+#             */
/*   Updated: 2015/11/27 20:01:25 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;

	if (!s1 && !s2)
		return (NULL);
	if (s1 && s2)
	{
		dest = (char *)malloc(sizeof(char) * (ft_strlen(s1)
					+ ft_strlen(s2)) + 1);
		if (dest == NULL)
			return (NULL);
		dest = ft_strcat((char *)s1, (char *)s2);
		return (dest);
	}
	return (NULL);
}
