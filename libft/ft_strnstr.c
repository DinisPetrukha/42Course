/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:23:07 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/17 15:47:19 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		n_len;
	const char	*ptr;

	i = 0;
	n_len = ft_strlen(small);
	if (n_len == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		ptr = big + i;
		while (big[i + j] == small[j] && small[j] != '\0' && i + j < len)
			j++;
		if (small[j] == '\0')
			return ((char *) ptr);
		i++;
	}
	return (NULL);
}
