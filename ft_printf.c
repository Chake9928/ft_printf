/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:41:20 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/09 00:39:45 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	fmt_chk(const char fmt, va_list *ap)
{
	if (fmt == 'c')
		return (ft_put_c(va_arg(*ap, int)));
	if (fmt == 's')
		return (ft_put_s(va_arg(*ap, char *)));
	if (fmt == 'p')
		return (ft_put_p(va_arg(*ap, unsigned long)));
	if (fmt == 'd' || fmt == 'i')
		return (ft_put_d_i(va_arg(*ap, int)));
	if (fmt == 'u')
		return (ft_put_u(va_arg(*ap, unsigned int)));
	if (fmt == 'x')
		return (ft_put_x(va_arg(*ap, unsigned int), LOWERCASE));
	if (fmt == 'X')
		return (ft_put_x(va_arg(*ap, unsigned int), UPPERCASE));
	if (fmt == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	size_t		len;
	size_t		i;
	va_list		ap;

	len = 0;
	i = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			len += fmt_chk(fmt[i + 1], &ap);
			i++;
		}
		else
			len += write(1, &fmt[i], 1);
		if (len >= INT_MAX)
			return (-1);
		i++;
	}
	va_end(ap);
	return ((int)len);
}
