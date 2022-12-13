/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:44:00 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/21 12:06:38 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		v;
	const unsigned char	*p;
	size_t				i;

	i = 0;
	v = c;
	p = s;
	while (i < n)
	{
		if (p[i] == v)
			return ((char *)p + i);
		i++;
	}
	return (0);
}
