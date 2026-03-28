/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 02:56:35 by davide            #+#    #+#             */
/*   Updated: 2026/03/11 22:00:10 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_core (t_node **stack)
{
	t_node	*secondo;
	t_node	*primo;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	primo = *stack;
	secondo = primo->next;

	primo->next = secondo->next;

	if (secondo->next != NULL)
		secondo->next->prev = primo;

	secondo->prev = NULL;
	secondo->next = primo;
	primo->prev = secondo;

	*stack = secondo;
}

void	push_core(t_node **dest, t_node **src)
{
	t_node	*node_to_push;

	if(!*src)
		return;

	node_to_push = *src;
	*src = node_to_push->next;
	if(*src != NULL)
		(*src)->prev = node_to_push;

	node_to_push->next = *dest;
	if (*dest != NULL)
		(*dest)->prev = node_to_push;
	*dest = node_to_push;
}

void	rotate_core(t_node **stack)
{
	t_node	*primo;
	t_node	*ultimo;

	if (!*stack || (*stack)->next == NULL)
		return;

	primo = *stack;
	ultimo = last_node(*stack);

	*stack = primo->next;
	(*stack)->prev = NULL;

	primo->prev = ultimo;
	primo->next = NULL;
	ultimo->next = primo;
}

void	reverse_rotate_core(t_node **stack)
{
	t_node	*ultimo;
	t_node	*penultimo;

	if (!*stack || (*stack)->next == NULL)
		return;

	ultimo = last_node(*stack);
	penultimo = ultimo->prev;
	ultimo->prev = NULL;
	penultimo->next = NULL;

	ultimo->next = *stack;
	ultimo->next->prev = ultimo;
	*stack = ultimo;
}
