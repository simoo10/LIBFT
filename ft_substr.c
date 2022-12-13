/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:51:11 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/15 14:08:04 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	k = ft_strlen(s);
	if (k < len)
		len = k;
	p = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !p)
		return (0);
	while (s[i] && i < start)
		i++;
	while (s[i] && i < start + len)
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = 0;
	return (p);
}
