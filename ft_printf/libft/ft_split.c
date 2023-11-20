/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:47:05 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/30 14:59:40 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ftsubstr(char const *s, int start, int len)
{
	int		i;
	char	*substr;

	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start])
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

static void	ft_free_mem(char **ptr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(ptr[i++]);
	free(ptr);
}

static void	ft_concat(char **ptr, int words, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (k < words)
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		ptr[k] = ftsubstr(s, i, j - i);
		if (ptr[k] == NULL)
		{
			ft_free_mem(ptr, words);
			return ;
		}
		ptr[k][j - i] = '\0';
		k++;
		i = j;
	}
	ptr[k] = NULL;
	return ;
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;

	words = count_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ft_concat(ptr, words, s, c);
	return (ptr);
}
