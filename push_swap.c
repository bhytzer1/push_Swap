/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:03:47 by dmandric          #+#    #+#             */
/*   Updated: 2026/03/03 21:59:44 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void append_node (t_node	**stack, t_node	*new_node)
{
	t_node	*last_node;

	if (new_node == NULL)
		return;
	if (*stack == NULL)
	{
		*stack = new_node;
		return;
	}
	last_node  = *stack;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	new_node->prev = last_node;
	new_node->next = NULL;
}
