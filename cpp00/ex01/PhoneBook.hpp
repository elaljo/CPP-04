/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:19:12 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/02 14:47:32 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int i;
	public:
		PhoneBook();
		void	Addcontact(Contact& contact_n);
		void	Display_saved_contacts();
		void	prompt_give_an_index();
		void	Diplay_index_infos(int i);
};



#endif

