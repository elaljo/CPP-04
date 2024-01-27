/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:34:47 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/27 23:30:23 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (save_fp);
}

void	Fixed::setRawBits(int const raw)
{
	save_fp = raw;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	if (this != &copy)
	{
		this->save_fp = copy.save_fp;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::Fixed():save_fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
