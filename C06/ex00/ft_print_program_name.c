/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:37:00 by jbury             #+#    #+#             */
/*   Updated: 2022/07/28 18:10:59 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	while (argc == 0)
	{	
		write(1, argv[argc], sizeof(argv[argc]));
		write(1, "\n", 1);
		argc++;
	}
	return (0);
}
