/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:15:01 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/16 02:36:06 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	finder;

	finder = (char)c;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == finder)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
