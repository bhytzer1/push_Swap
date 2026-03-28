/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:09:49 by dmandric          #+#    #+#             */
/*   Updated: 2026/03/25 16:48:33 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "push_swap.h"

static t_node	*new_node(int value)
{
	t_node	*n;

	n = malloc(sizeof(t_node));
	if (!n)
		return (NULL);
	n->value = value;
	n->next = NULL;
	n->prev = NULL;
	return (n);
}

void	free_stack(t_node **stack)
{
	t_node	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

static int	init_stack(t_node **a, int argc, char **argv)
{
	long	num;
	int		i;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
			return (0);
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		if (check_dup(*a, (int)num))
			return (0);
		append_node(a, new_node((int)num));
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	//t_node	*b;

	a = NULL;
	//b = NULL;
	if (argc < 2)
		return (0);
	if (!init_stack(&a, argc, argv))
	{
		free_stack(&a);
		write(2, "Error\n", 6);
		return (1);
	}
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	sort_three(&a);
	free_stack(&a);
	return (0);
}
