/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:23:51 by daelee            #+#    #+#             */
/*   Updated: 2020/05/26 18:56:50 by daelee           ###   ########.fr       */
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
	int			dot;
	int			width;
	int			prec;
	char		type;
}				t_info

int				ft_printf(const char *format, ...);
