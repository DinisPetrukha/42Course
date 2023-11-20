/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:26:02 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/17 17:05:20 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = dst;
	ptr_src = src;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (n--)
			ptr_dst[n] = ptr_src[n];
	}
	else
	{
		while (n--)
			*ptr_dst++ = *ptr_src++;
	}
	return (dst);
}
