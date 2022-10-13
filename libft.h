/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:18:02 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/13 16:17:14 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

int		ft_strlen(char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif