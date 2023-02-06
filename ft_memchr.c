/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:55:26 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/20 22:20:35 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	p;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (unsigned char *) s;
	p = (unsigned char) c;
	while (i < n)
	{
		if (ptr[i] == p)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
