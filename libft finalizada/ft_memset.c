/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:17:26 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 14:17:28 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return ((void *)temp);
}
/*int main() 
{
	char str[] = "Esta é uma string.";

  // Preenche a string str com zeros
	ft_memset(str, 'd', strlen(str));
	printf("%s\n", str);

  // Preenche a string str com caracteres 'a'
	ft_memset(str, 'a', strlen(str));
	printf("%s\n", str);



  // Preenche os primeiros 5 bytes da string str com caracteres 'b'
	ft_memset(str, 'b', 5);
	printf("%s\n", str);
}*/
