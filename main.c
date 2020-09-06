/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 19:49:51 by daelee            #+#    #+#             */
/*   Updated: 2020/09/06 12:21:05 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
Usage : gcc *.c libft/*.c
*/

int					main(void)
{
	int		ptr;
	int		ret;
	ret = ft_printf("%7.3s", NULL);
	printf("\nreturn : %d  \n", ret);
	return (0);
}
