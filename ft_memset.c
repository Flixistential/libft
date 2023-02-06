/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:15:06 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/16 17:35:27 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	ptr = b;
	while (i < len)
	{
		*ptr = (unsigned char) c;
		i++;
		ptr++;
	}
	return (b);
}
