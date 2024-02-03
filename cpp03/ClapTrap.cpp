/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:30:01 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/03 15:54:02 by moelalj          ###   ########.fr       */
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
	std::cout << "	Before attack: Hit_points = " << Hit_points << " | Energy_points = " << Energy_points << " | Attack damage = " << Attack_damage << std::endl;
	std::cout << "ClapTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Hit_points = Hit_points - Attack_damage;
	Energy_points--;
	if (Hit_points < 0)
		Hit_points = 0;
	if (Energy_points < 0)
		Energy_points = 0;
	std::cout << "	After attack: Hit_points = " << Hit_points << " | Energy_points = " << Energy_points << " | Attack damage = " << Attack_damage << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{	
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't repairs myself" << std::endl;
		return;
	}
	std::cout << "taking " << amount << " of damage" << std::endl;
	Hit_points -= amount;
	Energy_points--;
	if (Energy_points <= 0)
		Energy_points = 0;
	if (Hit_points <= 0)
		Hit_points = 0;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't repairs myself" << std::endl;
		return;
	}
	std::cout << "	Before repairs: Hit_points = " << Hit_points << " | Energy_points = " << Energy_points << " | Attack damage = " << Attack_damage << std::endl;
	std::cout << "ClapTrap: " << name << " repairs itself for " << amount << std::endl ;
	Hit_points = Hit_points + amount;
	Energy_points--;
	if (Energy_points <= 0)
		Energy_points = 0;
	std::cout << "	Before repairs: Hit_points = " << Hit_points << " | Energy_points = " << Energy_points << " | Attack damage = " << Attack_damage << std::endl;
}