/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:11:30 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/13 12:13:56 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	dst_copy = (char *) dst;
	src_copy = (char *) src;
	i = 0;
	while (i < len)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return ((void *) dst_copy);
}
