/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:52:45 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/20 22:22:43 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (dstsize + src_len);
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j) < (dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize > dst_len)
	{
		dst[i + j] = '\0';
		return (src_len + dst_len);
	}
	return (dstsize + src_len);
}
