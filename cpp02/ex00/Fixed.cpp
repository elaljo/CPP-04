/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:34:47 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/26 18:11:52 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed(const Fixed&)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::Fixed() : save_fp(0){}

Fixed::~Fixed()
{
	std::cout << "called destructor" << std::endl;
}
