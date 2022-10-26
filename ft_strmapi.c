/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:12:20 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/26 13:54:25 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*cpy;

	i = 0;
	if (!s)
		return (NULL);
	cpy = ft_strdup(s);
	if (!cpy)
		return (NULL);
	while (s[i] != '\0')
	{
		cpy[i] = f(i, s[i]);
		i++;
}
	return (cpy);
}
