/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 22:09:03 by davide            #+#    #+#             */
/*   Updated: 2026/03/15 04:53:24 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack_a)
{
	reverse_rotate_core(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate_core(stack_b);
	write(1, "rb\n", 3);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate_core(stack_a);
	reverse_rotate_core(stack_b);
	write(1, "rrr\n", 3);
}
