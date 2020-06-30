/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 21:19:24 by daelee            #+#    #+#             */
/*   Updated: 2020/06/30 18:20:23 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	check_flag(char *format, t_info *info, int i)
{
	if (format[i] == '-')
		info->minus = 1;
	else if (format[i] == '0')
		info->zero = 1;
}

void	check_width(va_list ap, char *format, t_info *info, int i)
{
	if (ft_isdigit(format[i]))
		info->width = info->width * 10 + format[i] - 48;
	else if (format[i] == '*')
	{
		info->width = va_arg(ap, int);
		if (info->width < 0)
		{
			info->minus = 1;
			info->width *= -1;
		}
	}
	
}

void	chek_prec(va_list ap, char *format, t_info *info, int i)
{

}
