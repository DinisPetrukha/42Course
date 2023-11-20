/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:29:51 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/12 16:20:52 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			if ((unsigned char)str1[i] > (unsigned char)str2[i])
				return (1);
			else if ((unsigned char)str1[i] < (unsigned char)str2[i])
				return (-1);
		}
		if (!(unsigned char)str1[i] || !(unsigned char)str2[i])
			break ;
		i++;
	}
	return (0);
}
