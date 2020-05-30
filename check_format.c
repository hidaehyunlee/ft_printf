/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 21:19:24 by daelee            #+#    #+#             */
/*   Updated: 2020/05/28 18:24:44 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flag(char *format, t_list info, int i)
{
	if (format[i] == '-')
		info->minus = 1;
	else if (format[i] == '0')
		info->zero = 1;
}

void	check_width(va_list ap, char *format, t_list info, int i)
{

}

void	chek_prec(va_list ap, char *format, t_list info, int i)
{

}
