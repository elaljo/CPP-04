/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:31:44 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 12:05:14 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& rhs);
    Animal& operator=(const Animal& rhs);
		~Animal();
		virtual void	makeSound() const;
		std::string getType()const ;
};

#endif