/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:46:04 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/24 11:27:18 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s_cpy;

	i = 0;
	if (!len || !s)
		return (NULL);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	s_cpy = (char *) ft_calloc(len + 1, sizeof(char));
	if (!s_cpy)
		return (NULL);
	while (len > 0 && s[start + i] != '\0')
	{
		s_cpy[i] = s[start + i];
		i++;
		len--;
	}
	return (s_cpy);
}
