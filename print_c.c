/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:15:31 by daelee            #+#    #+#             */
/*   Updated: 2020/07/02 19:41:54 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int         print_c(int c, t_info *info)
{
    int     ret;

    ret = 0;
    check_nbr_len_sign(c, info);
    if (info->minus == 1)
        ret += ft_putchar(c);
    ret += print_width(info->width, 1, info->zero);
    if (info->minus == 0)
        ret += ft_putchar(c);
    return (c);
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
            ft_putchar('^');
        len++;
        ret++;
    }
    return (ret);
}