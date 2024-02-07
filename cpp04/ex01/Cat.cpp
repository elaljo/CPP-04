/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:37:46 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 11:55:47 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(const Cat& rhs)
{
	this->type = rhs.type;
	std::cout << "Cat Copy Constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
  std::cout << "Cat Copy Assignment operator called" << std::endl;
  return *this;
}
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow.." << std::endl;
}
std::string Cat::getType() const
{
	return type;
}
