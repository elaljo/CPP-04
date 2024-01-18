/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:20:05 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/16 15:27:16 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
	return (Type);
}

void	Weapon::setType(const std::string &type)
{
	this->Type = type;
}
Weapon::Weapon(const std::string weapon_type)
{
	this->Type = weapon_type;	
}
Weapon::Weapon()
{
	this->Type = "Default";
	std::cout << "[Called constructor]" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "[Called destructor]" << std::endl;
}
