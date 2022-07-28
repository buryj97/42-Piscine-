#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	main(void)
{
	char	src[] = "copy";
	char	dest[] = "test";


	printf("%s\n%s\n%s\n", src, dest, ft_strcpy(src, dest));	
}
