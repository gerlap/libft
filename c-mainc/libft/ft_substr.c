/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:59:22 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/07 19:13:21 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;
	size_t s_len;

	if(!s)
		return NULL;

	s_len = ft_strlen(s);

	if (ft_strlen(s) < start)
		return ft_calloc(1, sizeof(char));

	substr = (char *)malloc(sizeof(char) * (len + 1));

	if (!substr)
		return NULL;

	i = 0;

	 if (start + len > s_len)
		len = s_len - start;

	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
