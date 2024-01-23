/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:05:15 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/22 17:56:23 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie1 = newZombie("zombie1");
	zombie1->announce();
	randomChump("zombie2");
	delete zombie1;
	return (0);
}