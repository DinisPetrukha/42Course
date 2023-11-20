/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:35:30 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/17 12:56:40 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(long long num)
{
	int	digits;

	digits = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		num = -num;
		digits++;
	}
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

static void	ft_putnbr(long long num, char *ptr, int len)
{
	while (num != 0)
	{
		ptr[len--] = '0' + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	long long	num;
	char		*ptr;

	num = n;
	len = ft_digits(num);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (num == 0)
		ptr[0] = '0';
	else if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	ft_putnbr(num, ptr, len - 1);
	ptr[len] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*red = ft_itoa(10);
// 	printf("%s\n", red);
// }
