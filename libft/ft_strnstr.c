/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:44:34 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/13 21:55:52 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	b = 0;
	while (haystack[b] && b < len)
	{
		n = 0;
		while (needle[n] && haystack[b + n] == needle[n] && (b + n) < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)&haystack[b]);
		b++;
	}
	return (NULL);
}
