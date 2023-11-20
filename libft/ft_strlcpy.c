/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:04 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/13 16:33:13 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*ptr_dst;

	i = 0;
	len = ft_strlen(src);
	ptr_dst = dst;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0' && size != 0)
		{
			ptr_dst[i] = src[i];
			i++;
		}
		ptr_dst[i] = '\0';
	}
	return (len);
}
