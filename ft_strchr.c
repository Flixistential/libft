/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:16:23 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/20 22:22:08 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	p;

	if (!s)
		return (NULL);
	p = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == p)
			return ((char *)&s[i]);
		i++;
	}
	if (p == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
