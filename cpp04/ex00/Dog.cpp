/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:46:24 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/05 13:23:51 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}
Dog::~Dog()
{
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
