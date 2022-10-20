/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:41:39 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/19 13:56:53 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && dstsize == 0)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *) src);
	i = 0;
	j = dst_len;
	if (dst_len > dstsize)
		return (src_len + dstsize);
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
