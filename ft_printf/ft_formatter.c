/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:33:11 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/30 14:53:55 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_formatter(char symbol, va_list args)
{
	int	count;

	count = 0;
	if (symbol == 'c')
		count = ft_printf_char((char)va_arg(args, int));
	else if (symbol == 's')
		count = ft_printf_str(va_arg(args, char *));
	else if (symbol == 'p')
		count = ft_printf_ptr(va_arg(args, unsigned long long));
	else if (symbol == 'd' || symbol == 'i')
		count = ft_printf_nbr(va_arg(args, int), 10, 1);
	else if (symbol == 'u')
		count = ft_printf_nbr(va_arg(args, unsigned int), 10, 1);
	else if (symbol == 'x')
		count += ft_printf_nbr(va_arg(args, unsigned int), 16, 1);
	else if (symbol == 'X')
		count += ft_printf_nbr(va_arg(args, unsigned int), 16, 2);
	else if (symbol == '%')
		count = ft_printf_char('%');
	return (count);
}
