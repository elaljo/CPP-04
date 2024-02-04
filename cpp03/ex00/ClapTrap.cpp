/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:30:01 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/04 15:25:29 by moelalj          ###   ########.fr       */
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
ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	this->name = rhs.name;
	this->Hit_points = rhs.Hit_points;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	std::cout << "Copy Constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->Hit_points = rhs.Hit_points;
		this->Energy_points = rhs.Energy_points;
		this->Attack_damage = rhs.Attack_damage;
	}
	std::cout << "Copy Assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
void	ClapTrap::attack(const std::string& target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't do a thing" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Energy_points--;
}
void ClapTrap::takeDamage(unsigned int amount)
{	
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't repairs myself" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << name << " taking " << amount << " of damage" << std::endl;
	Hit_points -= amount;
	Energy_points--;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't repairs myself" << std::endl;
		return;
	}
	std::cout << "ClapTrap: " << name << " repairs itself for " << amount << std::endl ;
	Hit_points = Hit_points + amount;
	Energy_points--;
}