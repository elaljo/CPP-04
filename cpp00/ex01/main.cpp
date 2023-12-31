/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:10:59 by moelalj           #+#    #+#             */
/*   Updated: 2023/12/31 16:19:17 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	Contact contact;
	PhoneBook phonebook;

	while (1)
	{
		std::string input;
		
		std::cout << "Please Enter ADD to start adding your new members or SEARCH to start searching for them:" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			contact.Addinfoscontact();
			phonebook.Addcontact(contact);
		}
		else if (input == "SEARCH")
		{
			phonebook.Display_saved_contacts();
			phonebook.prompt_give_an_index();
		}
		else if (input == "EXIT")
		{
			std::cout << "All your contact's are lost forever!" << std::endl;
			exit (0);
		}
		else
			std::cout << "Please enter a correct commands!\n The program only accepts ADD, SEARCH and EXIT." << std::endl;
	}
	return (0);
}