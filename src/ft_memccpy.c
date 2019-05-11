/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:12:23 by sganon            #+#    #+#             */
/*   Updated: 2018/09/17 15:54:43 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char				*src2;
	unsigned char				*dst2;
	unsigned int				i;

	i = -1;
	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	while (++i < n)
	{
		dst2[i] = src2[i];
		if ((unsigned char)c == src2[i])
			return (&((unsigned char *)dst)[i + 1]);
	}
	return (NULL);
}
