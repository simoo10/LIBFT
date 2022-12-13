/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:09:37 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/15 11:06:41 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	c = (char )c;
	j = ft_strlen(s);
	i = 0;
	if (c == 0)
	{
		return ((char *)s + j);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}	
	return (0);
}
