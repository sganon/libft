/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:27:39 by sganon            #+#    #+#             */
/*   Updated: 2015/11/24 17:17:30 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*ret;

	i = 0;
	ret = ft_strdup(s1);
	if (s2 == NULL)
		return (ret);
	while (i < n)
	{
		j = i;
		k = 0;
		while (ret[j] == s2[k] && j < n)
		{
			j++;
			k++;
			if (s2[k] == 0)
				return (char *)(&ret[i]);
		}
		i++;
	}
	return (NULL);
}
