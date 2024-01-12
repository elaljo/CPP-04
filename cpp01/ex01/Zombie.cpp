/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:10:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/11 15:15:21 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->zombie_name = name;
	std::cout << zombie_name << ": ";
}

Zombie::Zombie()
{
	std::cout << "[called constructor]" << std::endl;
	zombie_name = "D";
}
Zombie::~Zombie()
{
	std::cout << "[called destructor]" << std::endl;
}
