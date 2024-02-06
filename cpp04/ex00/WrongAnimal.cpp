/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:30:21 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 11:58:45 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	this->type = rhs.type;
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
  std::cout << "WrongAnimal Copy Assignment operator called" << std::endl;
  return *this;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
void	WrongAnimal::makeSound()const
{
	std::cout << "I'am the wrong cat - (BAA3)" << std::endl;
}
