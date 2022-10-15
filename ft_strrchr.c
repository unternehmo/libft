/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:17:44 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/15 12:00:30 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *) s);
	while ((i > 0) && (s[i] != c))
		i--;
	if (s[i] == c)
		return ((char *) &s[i]);
	return ((char *) 0);
}
