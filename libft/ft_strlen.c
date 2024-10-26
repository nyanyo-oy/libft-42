/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:50:32 by kensei            #+#    #+#             */
/*   Updated: 2024/10/26 21:32:04 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t ft_strlen(const char *str)
{
    const char *s;
    
    s = str;
    while(*s)
        s++;
    return(s - str);
}
#include <stdio.h>
int main(void)
{
	char str[10] = "Hello";
	printf("%zu\n", ft_strlen(&str[1]));
}