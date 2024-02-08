/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:37:46 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/08 15:08:47 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
}
Cat::Cat(const Cat& rhs)
{
	*this = rhs;
	std::cout << "Cat Copy Constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& rhs)
{
  std::cout << "Cat Copy Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		*brain = *rhs.brain;
		this->type = type;
	}
  return *this;
}
Cat::~Cat()
{
	delete brain;
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
