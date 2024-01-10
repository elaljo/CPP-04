/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:03:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/10 17:33:06 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::set_name(std::string name)
{
	zombie_name = name;
	std::cout << name << ": ";
}

Zombie::Zombie()
{
	zombie_name = "D";
}
Zombie::~Zombie()
{
	std::cout << "Called destructor..." << std::endl;
}