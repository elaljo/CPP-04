/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:26:08 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/12 17:06:08 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "The memory address of the string:     " << &string << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by strinfREF: " << &stringREF << std::endl;
	std::cout << "\n";
	std::cout << "The value of the string:            " << string << std::endl;
	std::cout << "The value pointed to by stringPTR:  " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:  " << stringREF << std::endl;
	return (0);
}