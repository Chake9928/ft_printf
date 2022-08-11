/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:06:04 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/11 09:39:45 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_p(uintptr_t num)
{
	size_t	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_put_p(num / 16);
		len += ft_put_p(num % 16);
	}
	if (num < 16)
	{
		if (num < 10)
			len += ft_put_c(num + '0');
		else
			len += ft_put_c(num + ('a' - 10));
	}
	return (len);
}
