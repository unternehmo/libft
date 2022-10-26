/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:37:02 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/26 13:54:25 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) + 1;
	k = 0;
	if (!set)
		return (ft_strdup(s1));
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	while (j-- > 0)
	{
		if (ft_strchr(set, s1[j]) == 0)
			break ;
		k++;
	}
	if (k > 0)
		k++;
	return (ft_substr(s1, i, ft_strlen(s1) - (k)));
}
