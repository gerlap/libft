/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:19:20 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/11 22:31:16 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_strjoin(const char *s1, const char *s2)
// {
// 	char	*res;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
// 	if (!res)
// 		return (NULL);
// 	while (s1[i])
// 		res[j++] = s1[i++];
// 	i = 0;
// 	while (s2[i])
// 		res[j++] = s2[i];
// 	res[j] = 0;
// 	return (res);
// }
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	tmp = ptr;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (ptr);
}
