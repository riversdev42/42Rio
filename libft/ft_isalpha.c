/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:29:16 by rivda-si          #+#    #+#             */
/*   Updated: 2023/10/17 14:41:34 by rivda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{	
	if ((c >= 65 && c <= 90)
		|| (c <= 122 && c >= 97))
	{
		return (1);
	}	
	else
	{
		return (0);
	}	
}
/*int main (void)
{
	int c;
	
	c = '0';
	
	if (ft_isalpha(c))
	{
		printf("é alfabetico");
	}
	else
	{
		printf("não é");
	}
}*/
