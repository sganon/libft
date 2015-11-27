/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:12:23 by sganon            #+#    #+#             */
/*   Updated: 2015/11/27 12:47:03 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*src2;
	char				*dst2;
	unsigned int		i;
	unsigned char		c2;

	if (n && dst && src)
	{
		c2 = (unsigned char)c;
		i = 0;
		src2 = (char *)src;
		dst2 = (char *)dst;
		while (i < n)
		{
			dst2[i] = src2[i];
			if (src2[i] == (unsigned char)c2)
				return (&dst[i + 1]);
			i++;
		}
	}
	return (NULL);
}
