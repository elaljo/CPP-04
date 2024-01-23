/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:20:05 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/23 15:58:08 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

const std::string& HumanA::getName() const
{
	return (name);
}

void	HumanA::setName(const std::string &type)
{
	this->name = type;
}
HumanA::HumanA(const std::string& name, Weapon &weapon): name(name), weapon(weapon) {}

HumanA::~HumanA()
{
	std::cout << "[Called destructor]" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
