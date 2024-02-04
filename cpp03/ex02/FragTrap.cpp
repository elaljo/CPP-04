/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:26:20 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/04 15:50:07 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "high five" << std::endl;
}

