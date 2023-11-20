/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:54:00 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/31 11:45:51 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_formatter(str[i++], args);
		}
		else
			count += write(1, &str[i++], 1);
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	char	*l;
	int	i;

	l = "lapis";
	ft_printf("----->>My Printf Function<<-----\n");
	i = ft_printf("c: %c\ns: %s\np: %p\nd: %d\ni: %i\nu: \
					%u\nx: %x\nX: %X\n%%: %%\n",
	'c',
	"Viktoria",
	l,
	42,
	42,
	4294967295,
	3900,
	3900);
	printf("Number of test chars: %d\n\n", i);

	printf("----->>Official Printf Function<<-----\n");
	i = printf("c: %c\ns: %s\np: %p\nd: %d\ni: %i\nu: \
					%u\nx: %x\nX: %X\n%%: %%\n",
	'c',
	"Viktoria",
	l,
	42,
	42,
	4294967295,
	3900,
	3900);
	printf("Number of official chars: %d\n", i);
}
