/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:19:48 by tkubsch           #+#    #+#             */
/*   Updated: 2022/12/05 14:51:41 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*i;

	if (!(*f) || !lst)
		return (NULL);
	temp = ft_lstnew((*f)(lst->content));
	i = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&i, del);
			return (NULL);
		}
		ft_lstadd_back(&i, temp);
		lst = lst->next;
	}
	return (i);
}
