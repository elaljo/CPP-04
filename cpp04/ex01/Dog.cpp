/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:46:24 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 18:22:55 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	instance = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog& rhs)
{
	this->type = rhs.type;
	std::cout << "Dog Copy Constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
  std::cout << "Dog Copy Assignment operator called" << std::endl;
  return *this;
}
Dog::~Dog()
{
	delete instance;
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
