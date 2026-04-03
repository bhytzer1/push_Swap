/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:02:30 by dmandric          #+#    #+#             */
/*   Updated: 2026/03/31 22:56:30 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stddef.h>
#include <unistd.h>

typedef struct	s_node
{
	int	value;
	int	index;

	int				cost_a;
	int				cost_b;
	struct s_node	*target;

	struct s_node*	next;
	struct s_node*	prev;
}	t_node;

t_node	*last_node(t_node *stack);
void	swap_core(t_node **stack);
void	push_core(t_node **dest, t_node **src);
void	rotate_core(t_node **stack);
void	reverse_rotate_core(t_node **stack);

void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_b, t_node **stack_a);
void	rb(t_node **stack_b);
void	ra(t_node **stack_a);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

t_node	*get_max_node(t_node *stack_b);
t_node	*get_target(t_node *nodo_a, t_node *stack_b);
int		cost_value(t_node *node, int total);
int		stack_size(t_node *stack);
void	set_index(t_node *stack);

int		is_valid_number(char *str);
long	ft_atol(const char *str);
int		check_dup(t_node *stack, int num);
void	append_node(t_node **stack, t_node *new_node);
void	free_stack(t_node **stack);
int		is_sorted(t_node *stack);
void	sort_three(t_node **stack_a);

#endif
