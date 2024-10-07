/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:06:44 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/03 20:03:27 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size) {
	size_t dest_len = 0;
	size_t src_len = 0;

	while (dest[dest_len] && dest_len < size) {
		dest_len++;
	}

	while (src[src_len]) {
		src_len++;
	}

	if (size <= dest_len) {
		return size + src_len;
	}

	size_t to_copy = size - dest_len - 1;
	if (to_copy > src_len) {
		to_copy = src_len;
	}

	for (size_t i = 0; i < to_copy; i++) {
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + to_copy] = '\0';

	return dest_len + src_len;
}
