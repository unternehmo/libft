/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:11:00 by tkubsch           #+#    #+#             */
/*   Updated: 2022/12/05 14:13:07 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	struct s_list	*lst_cpy;
	int				i;

	i = 0;
	lst_cpy = (struct s_list *) lst;
	while (lst_cpy != NULL)
	{
		i++;
		lst_cpy = lst_cpy->next;
	}
	return (i);
}
