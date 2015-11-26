/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:22:58 by sganon            #+#    #+#             */
/*   Updated: 2015/11/26 17:41:18 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*s1_dest;
	char			*s2_dest;

	s1_dest = ft_strdup(s1);
	s2_dest = ft_strdup(s2);
	if (s1_dest == NULL || s2_dest == NULL || n == 0)
		return (0);
	while (*s1_dest == *s2_dest && *s1_dest && *s2_dest && n != 0)
	{
		s1_dest++;
		s2_dest++;
		n--;
	}
	return (*s1_dest - *s2_dest);
}
