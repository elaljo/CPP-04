/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:49:10 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/04 14:04:41 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
}
void	PhoneBook::Addcontact(Contact& contact_n)
{
	static int len;
	
	if (i > 7)
	{
		contacts[len % 8] = contact_n;
		len++;
	}
	else
	{
		contacts[i] = contact_n;
		i++;
	}
}

void	PhoneBook::Display_saved_contacts()
{
	int	j = 0;
	
	std::cout << "*------------------------------------------*" << std::endl;
	std::cout << "Index     |First name|Last name |nickname  |" << std::endl;
	
	while (j < i)
	{
		std::cout << "*------------------------------------------*" << std::endl;
		std::cout << j << std::setw(10) << "|";
		if (contacts[j].getfirstname().length() > 10)
			std::cout << contacts[j].getfirstname().substr(0,9) << "." << "|";
		else
			std::cout << contacts[j].getfirstname() << std::setw(10 - contacts[j].getfirstname().length() + 1) << "|";
		if (contacts[j].getlastname().length() > 10)
			std::cout << contacts[j].getlastname().substr(0,9) << "." << "|";
		else
			std::cout << contacts[j].getlastname() << std::setw(10 - contacts[j].getlastname().length() + 1) << "|";
		if (contacts[j].getnickname().length() > 10)
			std::cout << contacts[j].getnickname().substr(0,9) << "." << "|" << std::endl;
		else
			std::cout << contacts[j].getnickname() << std::setw(10 - contacts[j].getnickname().length() + 1) << "|" << std::endl;
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
	int c;
	
	while (1)
	{
		c = i;
		if (c == 0)
		{
			std::cout << "Sorry your phonebook is empty, Please add new contacts." << std::endl;
			break;
		}
		std::cout << "Enter an index from 0->7 to display contact's informations: " << std::endl;
		std::getline(std::cin, input_s);
		if (std::cin.eof())
			exit(0);
		try{
			input_d = std::stoi(input_s);}
			catch(const std::out_of_range){
				std::cerr << "Out of range - accepts only data type: int"<< std::endl;
				continue;
			}
			catch(const std::invalid_argument){
				std::cerr << "Enter only numbers !!" << std::endl;
				continue;
			}
		if (input_d > 7)
		{
			std::cerr << "The index is out of contact's range !!" << std::endl;
			continue;
		}
		else if (input_d < 0)
		{
			std::cerr << "No negative numbers !DUMB!" << std::endl;
			continue;
		}
		while (c)
		{
			if (input_d == c - 1)
				break;
			c--;
		}
		if (input_d != c - 1)
			std::cout << "Can't found index contact - Not enough contact's members yet" << std::endl;
		else
		{
			PhoneBook::Diplay_index_infos(input_d);
			break;
		}
	}
}