/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:31:41 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/01 13:56:33 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	size_t	i;
	char	*copy;

	i = 0;
	copy = (char *) malloc(len + 1i);
	while (i < len)
	{
		copy[i] = s[start];
		i++;
		start++;
	}
	copy [i] = '\0';
	return (copy);
}
/*int	main(void)
{
	char const str[8] = "Riverson";
	char *str2;

	str2 = ft_substr(str, 2, 4);
	printf("%s",str2);
}*/