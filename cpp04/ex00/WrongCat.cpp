/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:36:10 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 11:58:34 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& rhs)
{
	this->type = rhs.type;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
  std::cout << "WrongCat Copy Assignment operator called" << std::endl;
  return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
void	WrongCat::makeSound() const
{
	std::cout << "I'am the wrong cat" << std::endl;
}