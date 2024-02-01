/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:24:41 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/01 18:13:58 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():save_fp(0)
{
	std::cout << "Default constructor called" << std::endl;
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
Fixed::Fixed(const Fixed& copy)
{
	this->save_fp = copy.save_fp;
	std::cout << "Copy constructor called" << std::endl;
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
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
float Fixed::toFloat(void) const
{ 
	return (float(save_fp) / (1 << save_fractional_bits));
}

std::ostream& operator<<(std::ostream& cout, const Fixed& copy)
{
	cout << copy.toFloat();
	return (cout);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	if (toFloat() > rhs.toFloat())
		return true;
	return false;
}
bool	Fixed::operator<(const Fixed &rhs) const
{
	if (toFloat() < rhs.toFloat())
		return true;
	return false;
}
bool	Fixed::operator>=(const Fixed &rhs) const
{
	if (toFloat() >= rhs.toFloat())
		return true;
	return false;
}
bool	Fixed::operator<=(const Fixed &rhs) const
{
	if (toFloat() <= rhs.toFloat())
		return true;
	return false;
}
bool	Fixed::operator==(const Fixed &rhs) const
{
	if (toFloat() == rhs.toFloat())
		return true;
	return false;
}
bool	Fixed::operator!=(const Fixed &rhs) const
{
	if (toFloat() != rhs.toFloat())
		return true;
	return false;
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	return (toFloat() * rhs.toFloat());
}
Fixed Fixed::operator+(const Fixed &rhs)
{
	return (toFloat() + rhs.toFloat());
}
Fixed Fixed::operator-(const Fixed &rhs)
{
	return(toFloat() - rhs.toFloat());
}
Fixed Fixed::operator/(const Fixed &rhs)
{
	return (toFloat() / rhs.toFloat());
}
Fixed Fixed::operator++()
{
	++save_fp;
	return (toFloat());
}
Fixed Fixed::operator--()
{
	--save_fp;
	return (toFloat());
}
Fixed Fixed::operator++(int)
{
	save_fp++;
	return (toFloat());
}
Fixed Fixed::operator--(int)
{
	save_fp--;
	return (toFloat());
}
int Fixed::getRawBits(void) const
{
	return (save_fp);
}
void	Fixed::setRawBits(int const raw)
{
	save_fp = raw;
}