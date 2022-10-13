/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:41:39 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/13 16:56:42 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i < dstsize - ft_strlen(dst) - 1)
	{
		dst(ft_strlen(dst) + i) = src[i];
		i++;
	}
	dst(ft_strlen(dst) + dstsize) = '\0';
}

