/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:07:07 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/15 14:34:33 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*casted;

	i = 0;
	casted = ((char *) s);
	while ((casted[i] != '\0') && (i < n - 1) && (casted[i] != c))
		i++;
	if (casted[i] == c)
		return ((char *) &casted[i]);
	return (NULL);
}
