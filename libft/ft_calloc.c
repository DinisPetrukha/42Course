/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:48:16 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/05 12:59:58 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(nitems * size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < nitems * size)
		*((char *)ptr + i++) = '\0';
	return (ptr);
}
