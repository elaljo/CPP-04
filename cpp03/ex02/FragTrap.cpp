/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:26:20 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/04 14:40:36 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "default";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap& rhs)
{
	this->name = rhs.name;
	this->Hit_points = rhs.Hit_points;
	this->Attack_damage = rhs.Attack_damage;
	this->Energy_points = rhs.Energy_points;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->Hit_points = rhs.Hit_points;
		this->Energy_points = rhs.Energy_points;
		this->Attack_damage = rhs.Attack_damage;
	}
	std::cout << "FragTrap Copy Assignment operator called" << std::endl;
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "I'am out of points - can't do a thing" << std::endl;
		return;
	}
	std::cout << "FragTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Hit_points = Hit_points - Attack_damage;
	Energy_points--;
	if (Hit_points < 0)
		Hit_points = 0;
	if (Energy_points < 0)
		Energy_points = 0;
	std::cout << Hit_points << " " << Attack_damage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	
}

