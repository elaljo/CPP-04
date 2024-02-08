/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:18:01 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/08 15:08:35 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}
Brain::Brain(const Brain& rhs)
{
	*this = rhs;
	std::cout << "Brain Copy Constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& rhs)
{
  std::cout << "Brain Copy Assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
  return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}