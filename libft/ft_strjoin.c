/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:15:48 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/16 10:10:37 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i1;
	size_t		i2;
	size_t		x;
	char		*c;

	if (!s1 || !s2)
		return (NULL);
	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	c = malloc((i1 + i2 + 1) * sizeof(char));
	if (!c)
		return (NULL);
	x = -1;
	while (++x < i1)
		c[x] = s1[x];
	x = -1;
	while (++x < i2)
		c[i1 + x] = s2[x];
	c[i1 + i2] = '\0';
	return (c);
}
