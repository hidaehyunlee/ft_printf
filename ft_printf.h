/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:23:51 by daelee            #+#    #+#             */
/*   Updated: 2020/07/02 19:38:54 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <stdio.h>
# define TYPE "csdiupxX"

typedef struct	s_info
{
	int			minus;
	int			zero;
	int			width;
	int			dot;
	int			prec;
	char		type;
	int			nbr_len;
	int			nbr_sign;
}				t_info;

int				ft_printf(const char *format, ...);

int				parse_format(va_list ap, char *format);
int				check_info(va_list ap, char *format, t_info *info, int i);
void			check_width_and_prec(va_list ap, char *format, t_info *info, int i);

int				print_type(va_list ap, t_info *info);
int        		print_c(int c, t_info *info);
int         	print_width(int width, int len, int zero);

void			init_info(t_info *info);
int				ft_isflag(char c);
int				check_nbr_len_sign(int nbr, t_info *info);

#endif