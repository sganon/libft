/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:22:58 by sganon            #+#    #+#             */
/*   Updated: 2015/11/25 17:48:11 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int 	i;
	char			*s1_dest;
	char			*s2_dest;

	i = 0;
	s1_dest = ft_strdup(s1);
	s2_dest = ft_strdup(s2);
	while (i < n)
	{
		if (*s1_dest != *s2_dest)
			return (*s1_dest - *s2_dest);
		i++;
		s1_dest++;
		s2_dest++;
	}
	return (0);
}
