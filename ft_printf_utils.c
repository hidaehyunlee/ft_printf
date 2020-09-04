/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 20:22:47 by daelee            #+#    #+#             */
/*   Updated: 2020/09/04 21:40:32 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		init_info(t_info *info)
{
	info->minus = 0;
	info->zero = 0;
	info->width = 0;
	info->prec = -1;
	info->type = 0;
	info->nbr_base = 0;
	info->nbr_sign = 1;
}

int			ft_nbrlen(unsigned long long nbr, t_info *info)
{
	int		i;
	int		divider;

	if (nbr == 0 && info->prec != 0)
		return (1);
	i = 0;
	while (nbr)
	{
		i++;
		nbr /= info->base_len;
	}
	return (i);
}
