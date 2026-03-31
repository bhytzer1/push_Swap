/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:27:52 by davide            #+#    #+#             */
/*   Updated: 2026/03/30 22:40:31 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 00:00:00 by davide            #+#    #+#             */
/*   Updated: 2026/03/28 00:00:00 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

t_node *get_target(t_node *nodo_a, t_node *stack_b)
{
	t_node	*b_current;
	t_node	*final_target;
	long	best_value;

	b_current = stack_b;
	final_target = NULL;
	best_value = LONG_MIN;

	while (b_current != NULL)
	{
		if (b_current->value < nodo_a->value && b_current->value > best_value)
		{
			best_value = b_current->value;
			final_target = b_current;
		}
		b_current = b_current->next;
	}
	if (final_target == NULL)
		final_target = get_max_node(stack_b);
	return (final_target);
}

t_node	*get_max_node(t_node	*stack_b)
{
	t_node	*x;
	long	max_value;

	x = NULL;
	max_value = LONG_MIN;

	while (stack_b	!= NULL)
	{
		if (stack_b->value > max_value)
		{
			max_value = stack_b->value;
			x = stack_b;
		}
		stack_b = stack_b->next;
	}
	return (x);
}




