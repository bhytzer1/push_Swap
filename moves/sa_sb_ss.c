/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 02:06:59 by davide            #+#    #+#             */
/*   Updated: 2026/03/10 03:33:14 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	sa(t_node **stack_a)
{
	swap_core(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	swap_core(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
