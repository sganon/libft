/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:37:35 by sganon            #+#    #+#             */
/*   Updated: 2015/11/23 12:40:10 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		length;
	int		i;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (i++ <= length)
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}
