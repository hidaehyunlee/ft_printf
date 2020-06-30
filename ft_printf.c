/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:23:54 by daelee            #+#    #+#             */
/*   Updated: 2020/06/30 20:34:48 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					print_type(va_list ap, t_info *info)
{
	int				ret;

	ret = 0;
	if (info->type == 'c')
		ret = print_c(ap, info);
	return (ret);
}

void				init_info(t_info *info)
{
	info->minus = 0;
	info->zero = 0;
	info->width = 0;
	info->prec = 0;
	info->type = 0;
}

int					check_info(va_list ap, char *format, t_info *info, int i)
{
	while (format[i] != '\0')
	{
		if (!ft_isdigit(format[i]) && !ft_isflag(format[i]) && !ft_strchr(TYPE, format[i]))
			break;
		check_flag(format, info, i);
		check_width(ap, format, info, i);
		chek_prec(ap, format, info, i);
		if(ft_strchr(TYPE, format[i]))
		{
			info->type = format[i];
			break;
		}
		i++;
	}
	return (i);
}

int					parse_format(va_list ap, char *format)
{
	int				i;
	int				ret;
	static	t_info	*info;

	i = 0;
	ret = 0;
	if (!(info = malloc(sizeof(t_info) * 1)))
		return (NULL);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			ret += ft_putchar(format[i]);
		else if (format[i] == '%')
		{
			init_info(info);
			i = check_info(ap, format, &info, ++i);
			ret += print_type(ap, info);
		}
		i++;
	}
	free(info);
	return (ret);
}

int					ft_printf(const char *format, ...)
{
	int				ret;
	va_list			ap;

	va_start(ap, format);
	ret = parse_format(ap, (char *)format);
	va_end(ap);
	return (ret);
}
