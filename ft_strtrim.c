/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:27:26 by sganon            #+#    #+#             */
/*   Updated: 2015/11/28 17:03:16 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_front(char *s)
{
	int i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	return (&s[i]);
}

static char	*ft_strtrim_back(char *s)
{
	int i;

	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
	{
		s[i] = 0;
		i--;
	}
	return (s);
}

char		*ft_strtrim(char const *s)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	str = (char *)s;
	return (ft_strtrim_back(ft_strtrim_front(str)));
}
