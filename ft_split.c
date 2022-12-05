/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:18:16 by tkubsch           #+#    #+#             */
/*   Updated: 2022/12/05 13:32:46 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_skip(char *s, char c, int word_or_char)
{
	while (*s == c && *s != '\0' && word_or_char == 0)
		s++;
	while (*s != c && *s != '\0' && word_or_char == 1)
		s++;
	return (s);
}

static char	*ft_get_word(char *s, char c)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	res = ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int	ft_count_words(char *s, char c)
{
	int	i;

	i = 0;
	s = ft_skip(s, c, 0);
	while (*s != '\0')
	{
		s = ft_skip(s, c, 1);
		s = ft_skip(s, c, 0);
		i++;
	}
	return (i);
}

static char	**ft_free(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*temp;
	char	**result;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	result = ft_calloc(ft_count_words((char *)s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (result);
	temp = (char *)s;
	temp = ft_skip(temp, c, 0);
	while (*temp != '\0')
	{
		result[i] = ft_get_word(temp, c);
		if (!result[i])
			return (ft_free(result));
		temp = ft_skip(temp, c, 1);
		temp = ft_skip(temp, c, 0);
		i++;
	}
	return (result);
}
