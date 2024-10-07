/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:36:36 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/07 16:02:15 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *src, const char *aim, size_t len)
{
	size_t	i;
	size_t	j;

	if (!src || !aim)
		return (NULL);
	if (!aim[0])
		return ((char*)src);
	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] && aim[j] &&
				i + j < len && src[i + j] == aim[j])
			j++;
		if (!aim[j])
			return ((char*)(src + i));
		i++;
	}
	return (NULL);
}
