/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:50:04 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/17 15:18:32 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char		*ptr;

	c = (unsigned char)c;
	ptr = str;
	while (*ptr)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr++;
	}
	if (c == *ptr)
		return ((char *)ptr);
	return (NULL);
}
