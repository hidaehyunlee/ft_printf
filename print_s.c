/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 15:26:36 by daelee            #+#    #+#             */
/*   Updated: 2020/08/31 23:13:08 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char        *parse_buf(char *str, int end, int len)
{
    int     i;
    char    *buf;

    end = end < len ? end : len;
    if (!(buf = (char *)malloc(sizeof(char) * end + 1)))
        return (NULL);
    i = 0;
    while (i < end)
    {
        buf[i] = str[i];
        i++;
    }
    buf[i] = '\0';
    return (buf);
}

int         print_width_str(char **buf, t_info *info)
{
    char    *width;
    char    *temp;
    int     i;

    if (info->width <= (int)ft_strlen(*buf))
        return ((int)ft_strlen(*buf));
    width = (char *)malloc(sizeof(char) * (info->width - ft_strlen(*buf) + 1));
    i = 0;
    while (i < info->width - ft_strlen(*buf))
    {
        width[i] = (info->zero == 1) ? '0' : ' ';
        i++;
    }
    width[i] = '\0';
    if (info->minus == 0)
        *buf = ft_strjoin(width, *buf, 3);
    else
        *buf = ft_strjoin(*buf, width, 3);
    return (info->width);
}

int         print_s(char *str, t_info *info)
{
    int     ret;
    char    *buf;
    int     len;

    ret = 0;
    len = ft_strlen(str);
    if (str == NULL)
        str = "(null)";
    if (info->prec == -1 || info->prec > len)
        info->prec = len;
    buf = parse_buf(str, info->prec, len);
    ret = print_width_str(&buf, info);
    ft_putstr(buf);
    return (ret);
}