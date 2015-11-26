/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:12:23 by sganon            #+#    #+#             */
/*   Updated: 2015/11/26 19:42:39 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*src2;
	char				*dst2;
	unsigned int		i;

	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n && src2[i] != (unsigned char)c)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
