/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:10:41 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/04 10:38:23 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*memcpy_dst;
	const unsigned char	*memcpy_src;

	memcpy_dst = dst;
	memcpy_src = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*memcpy_dst++ = *memcpy_src++;
	return (dst);
}
