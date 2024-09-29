/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:12:48 by glapshin          #+#    #+#             */
/*   Updated: 2024/09/29 16:18:17 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr( const char *s, int c) {
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

