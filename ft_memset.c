/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:17:53 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/07 15:19:54 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = p;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (p);
}