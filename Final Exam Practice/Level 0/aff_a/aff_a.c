#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if ((argc == 1 && (*argv[i] >= 'a' && *argv[i] <= 'z')) || (*argv[i] >= 'A' && *argv[i] >= 'Z'))
		write(1, "a\n", 2);
	else if (argc != 1)
		write(1, "a\n", 2);
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
