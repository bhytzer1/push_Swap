/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:08:27 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/14 18:13:42 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	counter;

	if (!dest || !src)
		return (0);
	dest_len = 0;
	while (dest[dest_len] && dest_len < dest_size)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len >= dest_size)
		return (dest_size + src_len);
	counter = 0;
	while (src[counter] && (dest_len + counter + 1) < dest_size)
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = '\0';
	return (dest_len + src_len);
}
