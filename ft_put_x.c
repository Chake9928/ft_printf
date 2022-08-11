/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:06:25 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/11 09:45:22 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_x(unsigned int num, bool sign)
{
	size_t			len;

	len = 0;
	if (num >= 16)
	{
		len += ft_put_x(num / 16, sign);
		len += ft_put_x(num % 16, sign);
	}
	else
	{
		if (num < 10)
			len += ft_put_c(num + '0');
		else
		{
			if (sign == LOWERCASE)
				len += ft_put_c(num + ('a' - 10));
			else
				len += ft_put_c(num + ('A' - 10));
		}	
	}
	return (len);
}
