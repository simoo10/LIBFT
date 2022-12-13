/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:49:42 by met-tahe          #+#    #+#             */
/*   Updated: 2022/10/15 13:55:34 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_checkstart(const char *s, const char *r)
{
	int	m;
	int	n;

	m = 0;
	n = 0;
	while (s[n])
	{
		while (r[m] && s[n] != r[m])
			m++;
		if (s[n] != r[m])
		{
			m = 0;
			break ;
		}
		m = 0;
		n++;
	}
	return (n);
}

static	int	ft_checkend(const char *s, const char *r)
{
	int	m;
	int	n;
	int	o;

	m = 0;
	n = ft_checkstart(s, r);
	o = ft_strlen(s);
	while (o > n)
	{
		while (r[m] && r[m] != s[o])
			m++;
		if (s[o] != r[m])
			break ;
		m = 0;
		o--;
	}
	return (o);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;
	int		k;
	int		l;

	if (!s1 || !set)
		return (0);
	k = ft_checkend(s1, set);
	i = ft_checkstart(s1, set);
	l = 0;
	p = malloc((k - i) + 2);
	if (!p)
		return (0);
	while (i <= k)
	{
		p[l] = s1[i];
		i++;
		l++;
	}
	p[l] = 0;
	return (p);
}
