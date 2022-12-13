/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:14 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/21 11:43:42 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*t;
	size_t				i;

	i = 0;
	p = s1;
	t = s2;
	while (i < n)
	{
		if (p[i] != t[i])
			return (p[i] - t[i]);
		i++;
	}
	return (0);
}
