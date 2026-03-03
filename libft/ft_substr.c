/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:56:58 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/18 15:49:04 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	n;
	size_t	s_len;
	char	*trgt;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = strdup("");
	else if (len > s_len - start)
		len = s_len - start;
	trgt = malloc(sizeof(char) * (len + 1));
	if (!trgt)
		return (NULL);
	n = 0;
	while (n < len)
	{
		trgt[n] = s[start + n];
		n++;
	}
	trgt[n] = '\0';
	return (trgt);
}
