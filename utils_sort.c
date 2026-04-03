/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 22:39:54 by davide            #+#    #+#             */
/*   Updated: 2026/04/02 02:18:35 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

//^ Restituisce il numero di rotazioni necessarie per portare il nodo in cima alla sua stack
int	cost_value(t_node *node, int total)
{
	int	half;

	half = total / 2;
	if (node->index <= half)
		return (node->index);
	else
		return (total - node->index);
}

//^ Ritorna il numero di elementi presenti nello stack
int	stack_size(t_node *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

//^ Assegna a ogni nodo il suo indice nella stack
void	set_index(t_node *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		stack->index = i;
		stack = stack->next;
		i++;
	}
}

//^ Calcola per ogni nodo di stack_a il target in stack_b e i costi di rotazione
void	set_cost(t_node *stack_a, t_node *stack_b)
{
	int		a_len;
	int		b_len;
	t_node	*curr_a;

	curr_a = stack_a;
	a_len = stack_size(stack_a);
	b_len = stack_size(stack_b);
	while (curr_a != NULL)
	{
		curr_a->target = get_target(curr_a, stack_b);
		if (curr_a->index <= a_len / 2)
			curr_a->cost_a = curr_a->index;
		else
			curr_a->cost_a = (curr_a->index - a_len);
		if (curr_a->target->index <= b_len / 2)
			curr_a->cost_b = curr_a->target->index;
		else
			curr_a->cost_b = (curr_a->target->index - b_len);
		curr_a = curr_a->next;
	}
}
void *same_moves(t_node *a_curr)
{
	if (a_curr->cost_a < 0 && a_curr->cost_b < 0)
		rrr(a_curr);

}
