/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:16:03 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/04 14:59:48 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
	public:
		void	setfirstname(std::string fname);
		std::string getfirstname();
		void	setlastname(std::string lname);
		std::string getlastname();
		void	setnickname(std::string nname);
		std::string getnickname();
		void	setphonenumber(std::string num);
		std::string getphonenumber();
		void	setdarkest_secret(std::string sname);
		std::string getdarkest_secret();
		void	Addinfoscontact();
		std::string	save_input(std::string info_contact);
		std::string save_phonenumber(std::string msg);
		bool IsNumeric(std::string str);
};
#endif