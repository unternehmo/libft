/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:02:14 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/19 09:31:48 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!src && len == 0)
		return (NULL);
	if (*str == '\0' || str == 0)
		return ((char *) src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (str[j] == src[i + j] && i + j < len)
		{
			if (str[j + 1] == '\0')
			{
				return ((char *) src + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
