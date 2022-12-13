/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:30:03 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/15 11:12:04 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s1);
	p = malloc(len + 1);
	if (!p)
		return (0);
	ft_strcpy(p, (char *)s1);
	return (p);
}
