/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubsch <tkubsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:08:48 by tkubsch           #+#    #+#             */
/*   Updated: 2022/12/05 14:33:29 by tkubsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_createstr(char *str, long int n, int end, int i)
{
	if (n < 0)
		n *= -1;
	if (n == 0)
		str[0] = '0';
	while (i > end - 1)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (end == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int nb)
{
	char		*str;
	int			i;
	int			len;
	int			end;
	long int	n;

	end = 0;
	n = (long int)nb;
	len = intlen(nb);
	if (n < 0)
	{
		len++;
		end = 1;
	}
	i = len - 1;
	str = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (ft_createstr(str, nb, end, i));
}
