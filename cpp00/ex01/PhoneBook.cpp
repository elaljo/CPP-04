/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:49:10 by moelalj           #+#    #+#             */
/*   Updated: 2023/12/29 17:13:42 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
}
void	PhoneBook::Addcontact(Contact& contact_n)
{
	if (i == 8)
		i = 0;
	contacts[i] = contact_n;
	i++;
}

void	PhoneBook::Display_saved_contacts()
{
	int	j = 0;
	
	std::cout << "*------------------------------------------*" << std::endl;
	std::cout << "Index     |First name|Last name |nickname  |" << std::endl;
	
	while (j < i)
	{
		std::cout << "*------------------------------------------*" << std::endl;
		std::cout << j << std::setw(10) << "|" 
		<< contacts[j].getfirstname() << std::setw(10 - contacts[j].getfirstname().length() + 1) << "|"
		<< contacts[j].getlastname() << std::setw(10 - contacts[j].getlastname().length() + 1) << "|"
		<< contacts[j].getnickname() << std::setw(10 - contacts[j].getnickname().length() + 1) << "|" << std::endl;
		j++;
	}
	std::cout << "*------------------------------------------*" << std::endl;
}
void	PhoneBook::Diplay_index_infos(int i)
{
	std::cout << "First name: " << contacts[i].getfirstname() << std::endl;
	std::cout << "Last name: " << contacts[i].getlastname() << std::endl;
	std::cout << "Nickname: " << contacts[i].getnickname() << std::endl;
	std::cout << "Phonenumber: " << contacts[i].getphonenumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[i].getdarkest_secret() << std::endl;
}

void	PhoneBook::prompt_give_an_index()
{
	std::string input_s;
	int input_d;
	int	c;
	
	while (1)
	{
		c = i;
		std::cout << "Enter an index from 0->7 to display contact's informations: " << std::endl;
		std::getline(std::cin, input_s);
		input_d = std::stod(input_s);
		if (input_d >= 8)
		{
			std::cout << "The index is out of range !!" << std::endl;
			continue;
		}
		else if (input_d < 0)
		{
			std::cout << "No negative numbers!DUMB!" << std::endl;
			continue;
		}
		while (c)
		{
			c--;
			if (input_d == c)
				break;
		}
		if (input_d != c)
			std::cout << "Can't found index contact - Not enough contact's members yet" << std::endl;
		else
			break;
	}
	PhoneBook::Diplay_index_infos(c);
}