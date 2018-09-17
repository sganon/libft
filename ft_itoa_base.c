/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:18:10 by sganon            #+#    #+#             */
/*   Updated: 2018/09/17 21:26:01 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_itoa_base(int val, int base)
{
    static char buf[32] = {0};
    int i = 30;

    while (val && i)
    {
      buf[i] = "0123456789abcdef"[val % base];
      --i;
      val /= base;
    }
    return &buf[i+1];
}