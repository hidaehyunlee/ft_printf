/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 20:22:47 by daelee            #+#    #+#             */
/*   Updated: 2020/07/05 12:47:01 by daelee           ###   ########.fr       */
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

int		check_nbr_len_sign(int nbr, t_info *info)
{
	int i;
	
	i = 0;
	if (nbr == 0 && info->prec != 0)
		return (1);
	if (nbr < 0)
		info->nbr_sign = -1;
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}