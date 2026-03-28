/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 22:03:53 by davide            #+#    #+#             */
/*   Updated: 2026/03/15 04:52:04 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	rotate_core(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate_core(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate_core(stack_a);
	rotate_core(stack_b);
	write(1, "rr\n", 3);
}
