/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:23:17 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/05/13 21:52:48 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*node;

	if ((*lst) == NULL)
		(*lst) = new_node;
	else
	{
		node = *lst;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
}
