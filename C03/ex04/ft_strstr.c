/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:45:40 by jbury             #+#    #+#             */
/*   Updated: 2022/07/26 17:47:31 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j])
	{
		i = 0;
		while ((to_find[i] != str[j]) && str[j] != '\0')
			j++;
		while ((to_find[i] == str[j]) || (to_find[i] == '\0'))
		{
			if (to_find[i] == '\0')
			{
				return (&str[j - i]);
			}
			i++;
			j++;
		}
	}
	return (0);
}
