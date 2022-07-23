/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:00:17 by jbury             #+#    #+#             */
/*   Updated: 2022/07/22 11:04:05 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ptchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{	
	int	x;
	int	y;

	x = -1;
	while (++x <= 98)
	{
		y = x;
		while (++y <= 99)
		{
			ptchar((char)(x / 10) + '0');
			ptchar((char)(x % 10) + '0');
			ptchar(' ');
			ptchar((char)(y / 10) + '0');
			ptchar((char)(y % 10) + '0');
			if (x != 98)
			{
				ptchar(',');
				ptchar(' ');
			}
		}
	}
}
