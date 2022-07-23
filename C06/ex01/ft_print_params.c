/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:25:01 by jbury             #+#    #+#             */
/*   Updated: 2022/07/22 12:45:58 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
