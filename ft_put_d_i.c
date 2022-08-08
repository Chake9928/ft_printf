/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:05:57 by okamototake       #+#    #+#             */
/*   Updated: 2022/08/09 00:33:41 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_d_i(int num)
{
	size_t			len;
	unsigned int	unum;

	len = 0;
	if (num < 0)
	{
		unum = (unsigned int)(num * -1);
		len += ft_put_c('-');
	}
	else
		unum = (unsigned int)num;
	if (unum >= 10)
	{
		len += ft_put_d_i(unum / 10);
		len += ft_put_d_i(unum % 10);
	}
	else
		len += ft_put_c(unum + '0');
	return (len);
}
