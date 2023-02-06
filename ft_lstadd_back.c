/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 04:28:39 by fboivin           #+#    #+#             */
/*   Updated: 2023/01/23 03:35:11 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*temp;

	if (lst && *lst)
	{
		temp = *lst;
		temp = ft_lstlast (*lst);
		temp->next = new;
		return ;
	}
	*lst = new;
}
