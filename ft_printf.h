/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:29:34 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/11 08:49:03 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LOWERCASE 1
# define UPPERCASE 0
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

size_t			ft_strlen(const char *s);
size_t			ft_put_c(const char c);
size_t			ft_put_s(const char *str);
size_t			ft_put_d_i(int num);
size_t			ft_put_p(unsigned long int num);
size_t			ft_put_u(unsigned int num);
size_t			ft_put_x(unsigned int num, bool sign);
int				ft_printf(const char *fmt, ...);

#endif