/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:48:05 by sganon            #+#    #+#             */
/*   Updated: 2015/11/26 19:38:53 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	c = (unsigned char)c;
	s = (char *)s;
	dest = ft_strdup(s);
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		if (*dest == c)
			return ((void *)dest);
		dest++;
		i++;
	}
	return (NULL);
}
