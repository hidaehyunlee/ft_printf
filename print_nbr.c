/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 18:07:52 by daelee            #+#    #+#             */
/*   Updated: 2020/09/04 19:30:18 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int         put_prec_str(unsigned long long nbr, t_info *info, char **buf)
{
    int     buf_len;
    int     ret;
    int     i;

    buf_len = ft_nbrlen(nbr, info);
}

int         print_nbr(unsigned long long nbr, t_info *info)
{
    char    *buf;
    int     buf_len;
    int     ret;

    if ((info->type == 'd' || info->type == 'i') && (int)nbr < 0)
    {
        info->nbr_sign = -1;
        nbr = -nbr;
    }
    buf_len = put_prec_str(nbr, info, &buf);
}
