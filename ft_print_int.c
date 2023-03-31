/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:25:07 by fboivin           #+#    #+#             */
/*   Updated: 2023/03/15 18:08:36 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_strint(char *str)
{
	int	i;

	if (str == NULL)
	{
		ft_print_strint("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_int(int num)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa(num);
	len = ft_print_strint(str);
	free(str);
	return (len);
}
