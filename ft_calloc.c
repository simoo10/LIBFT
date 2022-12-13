/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:55:26 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/17 15:27:19 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*p;

	i = 0;
	p = malloc(size * count);
	if (!p)
		return (0);
	ft_bzero(p, (size * count));
	return (p);
}
