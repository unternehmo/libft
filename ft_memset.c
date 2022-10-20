	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:37:26 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/12 11:38:29 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;
	char	*bc;

	count = 0;
	bc = (char *) b;
	while (count < len)
	{
		bc[count] = c;
		count++;
	}
	return (b);
}
