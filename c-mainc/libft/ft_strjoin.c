/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:19:20 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/07 19:28:36 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t len1;
	size_t len2;
	char *s3;
	size_t i;

	if (!s1 && !s2)
		return NULL;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	s3 = (char *)malloc(len1 + len2 + 1);
	if (!s3)
	return NULL; // Return NULL if allocation fails

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	for (size_t j = 0; j < len2; j++)
		s3[i + j] = s2[j];

	s3[len1 + len2] = '\0';

	return s3; // Return the new string
}

