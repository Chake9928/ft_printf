/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:06:10 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/08 22:38:35 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_u(unsigned int num)
{
	size_t			len;

	len = 0;
	if (num >= 10)
	{
		len += ft_put_d_i(num / 10);
		len += ft_put_d_i(num % 10);
	}
	else
		len += ft_put_c(num + '0');
	return (len);
}
