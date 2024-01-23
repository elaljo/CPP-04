/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:09 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/23 16:04:18 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

const std::string& HumanB::getName() const
{
	return (name);
}

void	HumanB::setName(const std::string &type)
{
	this->name = type;
}
void	HumanB::setWeapon(Weapon weapon) {
	this->weapon = &weapon;
}

HumanB::HumanB(): weapon(NULL) {}

HumanB::HumanB(const std::string& name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "[Called destructor]" << std::endl;
}

void	HumanB::attack()
{
	if (weapon == NULL)
	{
		std::cout << "weapon = null" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}