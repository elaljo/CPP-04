/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:03:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/22 17:55:04 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << zombie_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::set_name(std::string name)
{
	zombie_name = name;
}

Zombie::Zombie()
{
	zombie_name = "Default";
}
Zombie::~Zombie()
{
	std::cout << zombie_name;
	std::cout << " [Called destructor]" << std::endl;
}