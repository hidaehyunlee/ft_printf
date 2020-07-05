/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:23:54 by daelee            #+#    #+#             */
/*   Updated: 2020/07/05 12:46:19 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 int				print_type(va_list ap, t_info *info)
{
	int				ret;
	char			type;

	ret = 0;
	type = info->type;
	if (type == 'c')
		ret = print_c(va_arg(ap, int), info);
	// else if (type == 's')
	// 	ret = print_s(ap, info);
	// else if (type == 'd' || type == 'i')
	// 	ret = print_d_i(ap, info);
	// else if (type == 'x' || type == 'X' || type == 'u')
	// 	ret = print_x_X_u(ap, info);
	// else if (type == 'p')
	// 	ret = print_p(ap, info);
	return (ret);
}

void				check_info(va_list ap, char *format, t_info *info, int i)
{
	if (format[i] == '0' && info->dot == 0)
		info->zero = 1;
	else if (format[i] == '-')
		info->minus = 1;
	else if (format[i] == '.')
		info->dot = 1;
	else if (ft_isdigit(format[i]) || format[i] == '*')
		check_width_and_prec(ap, format, info, i);
	else if (ft_strchr(TYPE, format[i]))
	{
		info->type = format[i];
	}
}

void				check_width_and_prec(va_list ap, char *format, t_info *info, int i)
{
	if (ft_isdigit(format[i]))
	{
		if (info->dot == 1)
			info->prec = info->prec * 10 + format[i] - 48;
		else
			info->width = info->width * 10 + format[i] - 48;
	}
	else if (format[i] == '*')
	{
		if (info->dot == 1)
			info->prec = va_arg(ap, int);
		else {
			info->width = va_arg(ap, int);
			if (info->width < 0)
			{
				info->minus = 1;
				info->width *= -1;
			}
		}
		
	}
}

int					parse_format(va_list ap, char *format)
{
	int				i;
	int				ret;
	static	t_info	*info;

	i = 0;
	ret = 0;
	if (!(info = malloc(sizeof(t_info) * 1)))
		return (-1);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
			ret += ft_putchar(format[i++]);
		if (format[i] == '%')
		{
			i++;
			init_info(info);
			while (format[i] != '\0' && !(ft_strchr(TYPE, format[i])))
				check_info(ap, format, info, i++);
			info->type = format[i++];
			ret += print_type(ap, info);
			break;
		}
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

int					main(void)
{
	int ret = ft_printf("%5c", '\0');
	printf("\n%d", ret);
	return (0);
}
