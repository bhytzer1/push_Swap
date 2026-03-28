/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 03:24:36 by davide            #+#    #+#             */
/*   Updated: 2026/03/10 03:30:38 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	push_core(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_b, t_node **stack_a)
{
	push_core(stack_b, stack_a);
	write(1, "pb\n", 3);
}
