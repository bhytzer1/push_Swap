/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 02:56:35 by davide            #+#    #+#             */
/*   Updated: 2026/03/07 09:28:10 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	swap_core (t_node **stack)
{
	t_node	*primo;
	t_node	*secondo;
	t_node	*top;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	primo = *stack;
	secondo = primo->next;
	if (!top->next)
	{
		top = secondo->next;
		top->prev = primo;
	}
	secondo->prev = primo;
	primo->prev = NULL;

	primo->next = secondo->next;
	secondo->prev = NULL;
	secondo->next = primo;
	primo->prev = secondo;
	*stack = secondo;
	printf("%i\n", primo->value);
	printf("%i\n", secondo->value);

}

int main()
{

	t_node *a;
	t_node b;
	t_node c;

	b.value = 1;
	b.next = malloc(sizeof (t_node));
	b.prev = malloc(sizeof (t_node));

	c.value = 2;
	c.next = malloc(sizeof (t_node));
	c.prev = malloc(sizeof (t_node));

	b.next = &c;
	b.prev = NULL;
	c.next = NULL;
	c.prev = &b;

	// printf("%i\n", b.value);
	// printf("%i\n", b.next->value);
	// printf("%i\n", c.prev->value);


	a = &b;
	// printf("---DOPO SWAP:---\n");
//	printf("%i\n", b.value);
	swap_core(&a);
	printf("---DOPO SWAP:---\n%i\n", b.value);
	printf("%i\n", b.next->value);

}
