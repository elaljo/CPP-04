/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:34:48 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/08 14:45:15 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal& rhs)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->type = rhs.type;
}
Animal& Animal::operator=(const Animal& rhs)
{
  std::cout << "Animal Copy Assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
  return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType()const
{
	return type;
}

