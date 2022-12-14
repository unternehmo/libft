/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:07:07 by tkubsch           #+#    #+#             */
/*   Updated: 2022/12/05 14:48:41 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*foundchar;

	foundchar = NULL;
	p = (unsigned char *)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
		{
			p++;
		}
		else
		{
			foundchar = p;
			break ;
		}
	}
	return (foundchar);
}
