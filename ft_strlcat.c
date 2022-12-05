/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:41:39 by tkubsch           #+#    #+#             */
/*   Updated: 2022/12/05 14:43:02 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	count;
	int				i;

	i = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	count = ft_strlen(dest);
	while (src[i] != '\0' && count + 1 < size)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
