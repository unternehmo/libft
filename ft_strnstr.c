/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:02:14 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/15 15:12:35 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*casted_haystack;
	char	*casted_needle;

	i = 0;
	casted_haystack = ((char *) haystack);
	casted_needle = ((char *) needle);
	if (ft_strlen(casted_needle) == 0)
		return (casted_haystack);
	while ((casted_haystack[i] != '\0') && (casted_needle[i] != '0')
		&& i < n - 1)
		if (casted_haystack[i] == casted_needle[i])
			return ((char *) casted_needle[i]);
			i++;
	return (NULL);
}
