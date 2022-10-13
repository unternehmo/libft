/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:14:03 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/12 11:39:51 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_copy;
	char	*src_copy;

	dest_copy = (char *) dest;
	src_copy = (char *) src;
	i = 0;
	while (i < n)
	{
		dest_copy[i] = src_copy[i];
		i++;
	}
	return (dest_copy);
}
