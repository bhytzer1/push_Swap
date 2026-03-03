/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:39:00 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/13 21:30:58 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	char	finder;

	finder = (char)c;
	while (*s)
	{
		if (*s == finder)
			return ((char *)s);
		s++;
	}
	if (finder == '\0')
		return ((char *)s);
	return (NULL);
}
