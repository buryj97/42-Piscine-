/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:10:24 by jbury             #+#    #+#             */
/*   Updated: 2022/07/22 11:02:21 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	print_num(char a, char b, char c)
{
	if (c > '1')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
	b = a + 1;
		while (b <= '8')
		{
		c = b + 1;
			while (c <= '9')
			{
				print_num(a, b, c);
				if (a != '7')
				{
					write(1, ", ", 2);
				}	
					c++;
			}
			b++;
		}			
	a++;
	}
}
