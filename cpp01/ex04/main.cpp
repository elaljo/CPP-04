/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:53:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/18 17:55:43 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace_method(std::string line, std::string s1, std::string s2)
{
	std::cout << line << "hhhh" << std::endl;
	std::cout << s1 << s2 << std::endl;
	
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
				while (std::getline(inputfile, line))
				{
					replace_method(line, argv[2], argv[3]);
					outputfile << line;
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
