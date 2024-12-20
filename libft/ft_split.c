/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:10:42 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/20 09:31:41 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int	getlen(char const *s, char c)
{
	char	const *s0 = s;
	
	while (*s && *s != c)
		s++;
	return (s - s0);
}

char	**free_return(char **p,int i)
{
	int	love;
	
	love = 0;
	while (love < i)
	{
		free(p[love]);
		love++;
	}
	free(p);
	return (NULL);
}

char **ft_split (char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	size_t	word_len;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	p = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (i < count_words(s, c))
	{
		while (s[j] == c)
			j++;
		word_len = getlen(&s[j],c);
		p[i] = ft_substr(s, j, word_len);
		if (!p[i])
			return (free_return(p, i));
		j += word_len;
		i++;
	}
	p[i] = NULL;
	return (p);	
}

//int	main(void)
//{
//	char const str[] = "aaaaa apple  love i love apple";
//	char delimiter = ' ';
//	char **result;
//	int i;

//	result = ft_split(str, delimiter);

//	if (!result)
//	{
//		printf("Error: Memory allocation failed.\n");
//		return (1);
//	}

//	i = 0;
//	while (result[i])
//	{
//		printf("Word %d: %s\n", i + 1, result[i]);
//		free(result[i]); // メモリ解放
//		i++;
//	}
//	free(result); // メモリ解放

//	return (0);
//}

