/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:11:30 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/19 11:02:12 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	if (!dst && !src)
		return (NULL);
	dst_copy = (char *) dst;
	src_copy = (char *) src;
	i = 0;
	if (dst_copy > src_copy)
		while (len-- > 0)
			dst_copy[len] = src_copy[len];
	else
	{
		while (i < len)
		{
			dst_copy[i] = src_copy[i];
			i++;
		}
	}
	return ((void *) dst_copy);
}
