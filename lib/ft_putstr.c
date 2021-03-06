/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:05:10 by ezonda            #+#    #+#             */
/*   Updated: 2019/01/18 14:32:20 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(const char *s, t_struct *stru)
{
	int i;

	i = 0;
	if (!(s))
		return ;
	while (s[i])
	{
		ft_putchar(s[i], stru);
		i++;
	}
}
