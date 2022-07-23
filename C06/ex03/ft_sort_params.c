/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:25:13 by jbury             #+#    #+#             */
/*   Updated: 2022/07/22 14:44:27 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
