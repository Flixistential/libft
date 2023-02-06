/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:21:29 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/16 17:51:16 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	p;

	if (!s)
		return (NULL);
	p = c;
	i = ft_strlen(s);
	if (p == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == p)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
