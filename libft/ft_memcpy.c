/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:09:28 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/20 09:26:21 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dest);
}
//int	main(void)
//{
//	char	dest[10] = "dabcddd";
//	const char	src[] = "Apple";

//	printf("%s\n",(unsigned char *)(ft_memcpy
//		((void *)dest,(const void *)src,4)));
//}