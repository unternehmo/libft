/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:36:37 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/17 11:16:10 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_casted;
	char	*s2_casted;

	s1_casted = ((char *) s1);
	s2_casted = ((char *) s2);
	i = 0;
	if (n == 0)
		return (0);
	while (s1_casted[i] == s2_casted[i] && i < n - 1)
		i++;
	return (((unsigned char) s1_casted[i]) - ((unsigned char) s2_casted[i]));
}
