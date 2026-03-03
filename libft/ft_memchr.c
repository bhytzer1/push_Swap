/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:57:10 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/16 02:03:53 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	charfdr;

	ptr = (unsigned char *)s;
	charfdr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == charfdr)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
