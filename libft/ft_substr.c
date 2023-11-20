/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:51:57 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/13 15:24:42 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ftstrdup(const char *str)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	if (str == NULL)
		return (NULL);
	len = ftstrlen((char *)str);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	size_t			s_len;
	size_t			end;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ftstrlen((char *)s);
	if (start >= s_len)
		return (ftstrdup(""));
	if (len > s_len - start)
		len = s_len - start;
	end = start + len;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (start + i < end && s[start + i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
