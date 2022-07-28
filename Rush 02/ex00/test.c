#include <unistd.h>
#include <string.h>
char	nu_to_words(char* n)
{
	char* single[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int len = strlen(n);

	if (len == 0)
	{
		write(1, "Error\n", 5);
		return (0);
	}
	if (len == 1)
	{
		write(1, single[*n - '0'], strlen(single[*n]));
		return (0);
	}
}


int	main()
{
	nu_to_words("1");
}
