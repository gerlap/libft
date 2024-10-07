/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:24:22 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/07 15:50:40 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src)
{
	size_t size;
	char *dest;
	size_t i;

	if(!src)
		return NULL;

	size = 0;
	i = size;

	while(src[size])
		size++;

	dest = malloc(sizeof(char) * (size + 1));
	if(!dest)
		return NULL;

	while(i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
