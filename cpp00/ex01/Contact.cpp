/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:25:27 by moelalj           #+#    #+#             */
/*   Updated: 2023/12/29 19:10:00 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setfirstname(std::string fname)
{
	this->firstname = fname;
}
std::string Contact::getfirstname()
{
	return (this->firstname);
}
void	Contact::setlastname(std::string lname)
{
	this->lastname = lname;
}
std::string Contact::getlastname()
{
	return (this->lastname);
}
void	Contact::setnickname(std::string nname)
{
	this->nickname = nname;
}
std::string Contact::getnickname()
{
	return (this->nickname);
}
bool Contact::IsNumeric(std::string str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}
void	Contact::setphonenumber(std::string num)
{
	this->phone_number = num;
}
std::string	Contact::getphonenumber()
{
	return (this->phone_number);
}
void	Contact::setdarkest_secret(std::string sname)
{
	this->darkest_secret = sname;
}
std::string Contact::getdarkest_secret()
{
	return (this->darkest_secret);
}
std::string  Contact::save_input(std::string msg)
{
	std::string line;
	std::string g_line;
	
	while (1)
	{
		std::cout << msg;
		std::getline(std::cin, line);
		if (!line.empty())
			break;
	}
	return (line);
}
std::string  Contact::save_phonenumber(std::string msg)
{
	std::string line;
	while (1)
	{
		std::cout << msg;
		std::getline(std::cin, line);
		if (IsNumeric(line) == 0)
		{
			std::cout << "Please enter a correct Phonenumber.." << std::endl;
			continue;
		}
		else if (line.length() != 10)
		{
			std::cout << "Phonenumber need 10 numbers to be valid" << std::endl;
			continue;
		}
		if (!line.empty())
			break;
	}
	return (line);
}
void	Contact::Addinfoscontact()
{	
	this->setfirstname(Contact::save_input("First name: "));
	this->setlastname(Contact::save_input("Last name: "));
	this->setnickname(Contact::save_input("Nickname: "));
	this->setphonenumber(Contact::save_phonenumber("Phone number: "));
	this->setdarkest_secret(Contact::save_input("Darkest secret: "));
}