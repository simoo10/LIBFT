/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:42:34 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/21 12:13:32 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	lsrc;

	lsrc = ft_strlen(src);
	if (dstsize == 0)
		return (lsrc);
	len = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize <= len)
		return (lsrc + dstsize);
	i = len;
	while (src[j] && j < dstsize - len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len + lsrc);
}
