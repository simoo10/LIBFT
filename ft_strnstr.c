/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:15:13 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/21 12:11:58 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str && len == 0)
		return (0);
	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	j = 0;
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' )
		{
			j++;
		}
		if (to_find[j] == '\0' && (i + j) <= len)
			return ((char *)str + i);
		j = 0;
		i++;
	}
	return (0);
}
