/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:30:01 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/02 15:43:53 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Default";
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name):name(name)
{
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "Parameterized Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}