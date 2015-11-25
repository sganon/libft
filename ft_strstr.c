/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:27:09 by sganon            #+#    #+#             */
/*   Updated: 2015/11/24 16:26:16 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*ret;

	i = 0;
	ret = ft_strdup(s1);
	if (s2 == NULL)
		return (NULL);
	while (ret[i])
	{
		j = i;
		k = 0;
		while (ret[j] == s2[k])
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
