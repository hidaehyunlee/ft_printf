/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:23:51 by daelee            #+#    #+#             */
/*   Updated: 2020/06/30 22:01:16 by daelee           ###   ########.fr       */
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
	int			dot;
	int			prec;
	char		type;
}				t_info;

int				ft_printf(const char *format, ...);
int				parse_format(va_list ap, char *format);
int				check_info(va_list ap, char *format, t_info *info, int i);
void			check_width_and_prec(va_list ap, char *format, t_info *info, int i);
int				print_type(va_list ap, t_info *info);

void			init_info(t_info *info);
int				ft_isflag(char c);

#endif