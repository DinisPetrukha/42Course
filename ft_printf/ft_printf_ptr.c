/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:07:34 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/31 11:44:00 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_printf_char(num + '0');
		else
			ft_printf_char(num - 10 + 'a');
	}
}

int	ft_printf_ptr(unsigned long long ptr)
{
	int	counter;

	counter = 0;
	if ((void *)ptr == NULL)
		counter += write(1, "(nil)", 5);
	else
	{
		counter += write(1, "0x", 2);
		ft_put_ptr((uintptr_t)ptr);
		counter += ft_ptr_len((uintptr_t)ptr);
	}
	return (counter);
}
