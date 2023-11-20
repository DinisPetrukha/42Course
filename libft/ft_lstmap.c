/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:17:29 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/10/13 12:48:42 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*current;
// 	t_list	*next;

// 	if (lst == NULL || *lst == NULL)
// 		return ;
// 	current = *lst;
// 	if (current != NULL)
// 	{
// 		while (current != NULL)
// 		{
// 			next = current->next;
// 			if (del != NULL && current->content != NULL)
// 				(del)(current->content);
// 			free(current);
// 			*lst = next;
// 		}
// 		*lst = NULL;
// 	}
// 	return ;
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*ptr;

// 	ptr = *lst;
// 	if (ptr == NULL)
// 	{
// 		ptr = new;
// 		return ;
// 	}
// 	while (ptr->next != NULL)
// 		ptr = ptr->next;
// 	ptr->next = new;
// 	new->next = NULL;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*ptr;

	ptr = NULL;
	while (lst)
	{
		node = (t_list *)malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		node->content = (*f)(lst->content);
		if (!(node->content))
		{
			ft_lstclear(&ptr, del);
			free(node);
			return (NULL);
		}
		node->next = NULL;
		ft_lstadd_back(&ptr, node);
		lst = lst->next;
	}
	return (ptr);
}
