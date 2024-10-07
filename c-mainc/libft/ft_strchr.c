/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:58:52 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/07 14:58:55 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr( const char *s, int c)
{
	while(*s) {
		if (*s == (char)c) {
			return (char *)s;
		}
	s++;
	}
	if (c == '\0')
	{
		return (char *)s;
	}
	return NULL;
}
