/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 20:22:47 by daelee            #+#    #+#             */
/*   Updated: 2020/07/02 12:08:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_info(t_info *info)
{
	info->minus = 0;
	info->zero = 0;
	info->width = 0;
	info->dot = 0;
	info->prec = 0;
	info->type = 0;
	info->nbr_len = 0;
	info->nbr_sign = 1;
}

int		ft_isflag(char c)
{
	return ((c == '-') || (c == '0') || (c == '*') || (c == '.'));
}

int		check_nbr_len_sign(int nbr, t_info *info)
{
	int i;
	
	i = 0;
	if (nbr == 0 && info->prec != 0)
		return (1);
	while (nbr)
	{
		if (nbr < 0)
			info->nbr_sign = -1;
		i++;
	}
		
	return (i);
}