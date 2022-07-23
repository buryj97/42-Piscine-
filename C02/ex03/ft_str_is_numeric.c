/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:28:16 by jbury             #+#    #+#             */
/*   Updated: 2022/07/21 15:42:44 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
		while (str[i] != '\0')
		{
			if ((str[i] >= '0' && str[i] <= '9') || str[i] == '\0')
			{
				i++;
			}
			else
				return (0);
		}
	return (1);
}