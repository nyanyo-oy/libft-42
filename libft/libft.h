/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:16:07 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/25 16:56:06 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_

# include <stdlib.h>
# include <unistd.h>

# include <stdio.h>

int ft_atoi(const char *str);
void 				ft_bzero(void *s1, size_t n);
int 				ft_isalnum(int c);
int					ft_isalpha(int c);
int 				ft_isascii(int c);
int 				ft_isdigit(int c);
int 				ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
//
void 				*ft_memmove(void *dest0, const void *src0, size_t n);
void 				*ft_memset(void *s1, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
size_t				ft_strlcat(char	*dst, const char *src, size_t size);
	size_t				ft_strlen(const char *str);
size_t	ft_strlcat(char	*dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t 				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

void	*ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
#endif
