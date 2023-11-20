/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:06:09 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/30 11:41:16 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printf_str(char	*str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (*str)
	{
		ft_printf_char(*str);
		count++;
		str++;
	}
	return (count);
}
