/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_c_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:05:42 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/09 16:46:15 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_c(const char c)
{
	return (write(1, &c, 1));
}

size_t	ft_put_s(const char *str)
{
	size_t	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
