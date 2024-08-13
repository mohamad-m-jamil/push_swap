/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:23:00 by mjamil            #+#    #+#             */
/*   Updated: 2024/07/27 16:23:02 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
#include "../../inc/libft.h"

int	ft_putnbr_base(unsigned long long nb, const char *base)
{
	unsigned long long	len;
	int					count;

	count = 0;
	len = ft_strlen(base);
	if (nb >= len)
		count += ft_putnbr_base(nb / len, base);
	count += ft_putchar(base[nb % len]);
	return (count);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
