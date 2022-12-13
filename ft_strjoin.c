/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:19:49 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/23 15:20:45 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	len;
	char	*p;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	lens1 = 0;
	lens2 = 0;
	p = malloc(len + 1);
	if (!p)
		return (0);
	while (s1[lens1])
	{
		p[lens1] = s1[lens1];
		lens1++;
	}
	while (s2[lens2])
	{
		p[lens1 + lens2] = s2[lens2];
		lens2++;
	}
	p[lens1 + lens2] = 0;
	return (p);
}
