/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:46:24 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/08 15:08:51 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(const Dog& rhs)
{
	*this = rhs;
	std::cout << "Dog Copy Constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& rhs)
{
  std::cout << "Dog Copy Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		*brain = *rhs.brain;
		this->type = rhs.type;
	}
  return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}
void	Dog::makeSound()const
{ 
	std::cout << "Bark Bark" << std::endl;
}
std::string Dog::getType() const
{
	return type;
}
