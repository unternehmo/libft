/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:18:02 by tkubsch           #+#    #+#             */
/*   Updated: 2022/10/15 14:47:53 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(char *str);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif