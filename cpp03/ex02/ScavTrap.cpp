/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:21:23 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/04 15:50:56 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constuctor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& rhs)
{
	this->name = rhs.name;
	this->Hit_points = rhs.Hit_points;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->Hit_points = rhs.Hit_points;
		this->Energy_points = rhs.Energy_points;
		this->Attack_damage = rhs.Attack_damage;
	}
	std::cout << "ScavTrap Copy Assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap desrtuctor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't do a thing" << std::endl;
		return;
	}
	std::cout << "ScavTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Hit_points = Hit_points - Attack_damage;
	Energy_points--;
}
void	ScavTrap::guardGate()
{
	std::cout << "REMINDER: ScavTrap is now in Gate keeper mode." << std::endl;
}