/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 23:55:34 by dmandric          #+#    #+#             */
/*   Updated: 2026/04/04 00:39:22 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <limits.h>

//^ Rotazioni combinate (rr/rrr) quando cost_a e cost_b hanno stesso segno
void	same_moves(t_node **stack_a, t_node **stack_b, t_node *value)
{
	while (value->cost_a < 0 && value->cost_b < 0)
	{
		rrr(stack_a, stack_b);
		value->cost_a++;
		value->cost_b++;
	}
	while (value->cost_a > 0 && value->cost_b > 0)
	{
		rr(stack_a, stack_b);
		value->cost_a--;
		value->cost_b--;
	}
}

//^ Esegue le rotazioni singole residue su stack_a e stack_b
void	not_same_moves(t_node **stack_a, t_node **stack_b, t_node *value)
{
	while (value->cost_a > 0)
	{
		ra(stack_a);
		value->cost_a--;
	}
	while (value->cost_a < 0)
	{
		rra(stack_a);
		value->cost_a++;
	}
	while (value->cost_b > 0)
	{
		rb(stack_b);
		value->cost_b--;
	}
	while (value->cost_b < 0)
	{
		rrb(stack_b);
		value->cost_b++;
	}
}

//^ Trova in stack_a il nodo con il valore minimo maggiore di b_node->value
t_node	*target_a(t_node *b_node, t_node *stack_a)
{
	t_node	*a_curr;
	t_node	*target;
	long	best_value;

	a_curr = stack_a;
	target = NULL;
	best_value = LONG_MAX;
	while (a_curr)
	{
		if (a_curr->value > b_node->value && a_curr->value < best_value)
		{
			best_value = a_curr->value;
			target = a_curr;
		}
		a_curr = a_curr->next;
	}
	if (!target)
		return (get_min_node(stack_a));
	return (target);
}
