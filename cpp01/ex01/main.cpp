/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:22:18 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/21 18:40:05 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *obj = zombieHorde(2, "ana");
	int i = 0;
	
	while (i < 2)
	{
		obj[i].announce();
		i++;
	}
	delete[] obj;
	return (0);
}