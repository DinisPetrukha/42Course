/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:08:55 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/17 17:17:40 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			ptr = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return ((char *)ptr);
}
