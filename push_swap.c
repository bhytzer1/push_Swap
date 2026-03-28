/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:03:47 by dmandric          #+#    #+#             */
/*   Updated: 2026/03/25 17:08:51 by davide           ###   ########.fr       */
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

void	sort_three(t_node **stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*stack_a)->value;
	mid = (*stack_a)->next->value;
	bot = (*stack_a)->next->next->value;

	if (top > mid && top > bot)
		ra(stack_a);
	else if (mid > top && mid > bot)
		rra (stack_a);

	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}
