/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:23:51 by daelee            #+#    #+#             */
/*   Updated: 2020/06/30 19:50:03 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

# define TYPE "csdiupxX"

typedef struct	s_info
{
	int			minus;
	int			zero;
	int			width;
	int			prec;
	char		type;
}				t_info;

int				ft_printf(const char *format, ...);
int				parse_format(va_list ap, char *format);
void			init_info(t_info *info);
int				print_type(va_list ap, t_info *info);

int				check_info(va_list ap, char *format, t_info *info, int i);
void			check_flag(char *format, t_info *info, int i);
void			check_width(va_list ap, char *format, t_info *info, int i);
void			chek_prec(va_list ap, char *format, t_info *info, int i);
