/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:53:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/19 15:45:56 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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
			std::string s1 = argv[2];
			std::string s2 = argv[3];
			std::size_t	found;
			
			replace_file.append(".replace");
			outputfile.open(replace_file);
			if (outputfile.is_open())
			{
				while (std::getline(inputfile, line))
				{
					while (line.find(s1) != std::string::npos)
					{
						found = line.find(s1);
						if (found != std::string::npos)
						{
							line = line.erase(found, s1.length());
							line = line.insert(found, s2);
						}
					}
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
