/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:32:34 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/29 16:35:45 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::toFloat(void) const
{ 
	return (float(save_fp) / (1 << save_fractional_bits));
}

int Fixed::toInt(void) const
{
	return(save_fp >> save_fractional_bits);
}

std::ostream&	operator<<(std::ostream& cout, const Fixed& copy)
{
    cout << copy.toFloat();
    return (cout);
}

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
	this->save_fp = copy.save_fp;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::Fixed(const int number)
{
	save_fp = number << save_fractional_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	save_fp = roundf(number * (1 << save_fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed():save_fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}