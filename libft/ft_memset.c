/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:07:04 by glapshin          #+#    #+#             */
/*   Updated: 2024/09/28 21:07:46 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len-- > 0)
		*temp++ = (unsigned char)c;
	return (b);
}
