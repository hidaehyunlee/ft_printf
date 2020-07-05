/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_pct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:15:31 by daelee            #+#    #+#             */
/*   Updated: 2020/07/05 13:13:47 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int         print_c_pct(int c, t_info *info)
{
    int     ret;

    if (info->type == '%')
        c = '%';
    ret = 0;
    if (info->minus == 1)
        ret += ft_putchar(c); 
    ret += print_width(info->width, 1, info->zero);
    if (info->minus == 0)
        ret += ft_putchar(c);
    return (ret);
}

int         print_width(int width, int len, int zero)
{
    int     ret;

    ret = 0;
    while (len < width)
    {
        if (zero == 1)
            ft_putchar('0');
        else
            ft_putchar(' ');
        len++;
        ret++;
    }
    return (ret);
}