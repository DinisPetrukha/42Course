/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:07:04 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/30 10:59:07 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf_nbr(long nbr, int base, int size)
{
	int		count;
	char	*symbols;
	char	*symbols_up;

	count = 0;
	symbols = "0123456789abcdef";
	symbols_up = "0123456789ABCDEF";
	if (nbr < 0)
	{
		ft_printf_char('-');
		return (ft_printf_nbr(-nbr, base, size) + 1);
	}
	else if (nbr < base)
	{
		if (size == 1)
			return (ft_printf_char(symbols[nbr]));
		else
			return (ft_printf_char(symbols_up[nbr]));
	}
	else
	{
		count = ft_printf_nbr(nbr / base, base, size);
		return (ft_printf_nbr(nbr % base, base, size) + count);
	}
}
