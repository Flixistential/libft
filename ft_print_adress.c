/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:12:14 by fboivin           #+#    #+#             */
/*   Updated: 2023/03/15 18:08:46 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putadr(unsigned long int ptr)
{
	if (ptr >= 16)
	{
		ft_putadr(ptr / 16);
		ft_putadr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0', 1);
		else
			ft_putchar_fd(ptr -10 + 'a', 1);
	}
}

int	ft_adr_len(unsigned long int ptr)
{
	int	count;

	count = 0;
	while (ptr >= 16)
	{
		ptr = ptr / 16;
		count++;
	}
	count++;
	return (count);
}

int	ft_print_adress(void *ptr)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	if (!ptr)
	{
		write(1, "0", 1);
		return (3);
	}
	else
	{
		len += ft_adr_len((unsigned long)ptr);
		ft_putadr((unsigned long)ptr);
	}
	return (len);
}
