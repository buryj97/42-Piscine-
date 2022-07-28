int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;

	while (str[i])
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == '\0')
			i++;
		else
			return (0);
	return (1);
}

#include <stdio.h>

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"OK":"Fail",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabc6456defghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_alpha("1")?"OK":"Fail",
			!ft_str_is_alpha(" ")?"OK":"Fail",
			!ft_str_is_alpha("\\")?"OK":"Fail",
			!ft_str_is_alpha("\n")?"OK":"Fail");
}
