# include <cstring>
# include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; i < (int)strlen(argv[j]); i++)
			putchar((toupper(argv[j][i])));
	}
	std::cout << std::endl;
	return (0);
}