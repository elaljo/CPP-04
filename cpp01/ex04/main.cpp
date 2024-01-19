/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:53:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/19 10:10:05 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{
	int	i = 0;

	while (line[i])
	{
		if (line[i] == s1[0])
			line[i] = s2[0];
		i++;
	}
	return (line);
}
int main(int argc, char* argv[])
{
	if (argc == 4)
	{
		std::ifstream inputfile;
		
		inputfile.open(argv[1]);
		if (inputfile.is_open())
		{
			std::string line;
			std::ofstream outputfile;
			std::string replace_file = argv[1];
			
			replace_file.append(".replace");
			outputfile.open(replace_file);
			if (outputfile.is_open())
			{
				std::string new_line;
				
				while (std::getline(inputfile, line))
				{
					new_line = replace(line, argv[2], argv[3]);
					outputfile << new_line;
					outputfile << "\n";
				}
				outputfile.close();
			}
			inputfile.close();
		}
		else
			std::cerr << "Error opening the file - file not found...";
	}
	else
		std::cout << "Bad parameters input.." << std::endl;
	return (0);
}
