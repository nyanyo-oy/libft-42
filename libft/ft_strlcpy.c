/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:25:32 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/25 22:49:04 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	char const	*s = src;
	size_t		n;

	d = dst;
	n = size;
	if (n != 0)
	{
		while (n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	if (n == 0)
	{
		*d = '\0';
		while (*s)
			s++;
	}
	return (s - src  - 1);
}
