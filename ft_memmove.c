/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:44:39 by sganon            #+#    #+#             */
/*   Updated: 2015/11/27 16:57:41 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	if (dst && src)
	{
		ptr = malloc(len);
		if (ptr == NULL)
			return (dst);
		ft_memcpy(ptr, src, len);
		ft_memcpy(dst, ptr, len);
		return (dst);
	}
	return (dst);
}
