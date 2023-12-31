/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:25:01 by rivda-si          #+#    #+#             */
/*   Updated: 2023/11/17 16:25:15 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		len;
	int		j;
	char	*temp;

	temp = (char *)string;
	len = ft_strlen(temp);
	j = len;
	while (j >= 0)
	{
		if (temp[j] == (char)c)
		{
			return (&temp[j]);
		}
		j--;
	}
	return (NULL);
}
/*int main() {
  char string[] = "Esta é uma string.";
  char c = 'a';
	char *ptr;
	ptr = string;
	int	len = ft_strlen(ptr);
  // Localiza a primeira ocorrência do caractere 'a' na string
  char *p =ft_strrchr(string, c);

  // Verifica se o caractere foi encontrado
  if (p != NULL) {
    // Imprime o ponteiro para o caractere
			printf("%s\n", p);
  } else {
    // Imprime que o caractere não foi encontrado
    printf("O caractere não foi encontrado.\n");
  }
	printf("%d",len);
  return 0;
}*/
