#include <iostream>

char	convert_to_upper_letter(char	c)
{
	return(std::toupper(c));
}
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	i;
		int	j;

		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << convert_to_upper_letter(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}