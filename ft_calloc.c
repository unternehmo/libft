/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:36:33 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/20 10:43:45 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, size * count);
	return (pointer);
}
