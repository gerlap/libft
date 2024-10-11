/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:45:04 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/11 21:38:38 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len = 1;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*alpha;

	len = ft_len(n);
	alpha = (char *)malloc(sizeof(char) * (len + 1));
	if (!alpha)
		return (NULL);
	nbr = (long) n;
	if (nbr < 0)
	{
		nbr = -nbr;
		alpha[0] = '-';
	}
	alpha[len--] = '\0';
	alpha[len] = '0';
	while (nbr > 0)
	{
		alpha[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (alpha);
}
