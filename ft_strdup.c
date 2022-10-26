/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:37:52 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/24 11:16:14 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s1);
	i = 0;
	s1_cpy = (char *) ft_calloc(str_len + 1, sizeof(char));
	if (!s1_cpy)
		return (NULL);
	while (s1[i] != '\0')
	{
		s1_cpy[i] = s1[i];
		i++;
	}
	return (s1_cpy);
}
