/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 22:44:40 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/14 18:06:37 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char		*p;
	size_t				i;

	i = 0;
	p = (unsigned char *) ptr;
	while (i < num)
	{
		p[i] = 0;
		i++;
	}
}
