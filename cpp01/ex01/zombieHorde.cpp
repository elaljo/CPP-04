/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:14:40 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/11 14:58:55 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *obj;
	int	i;
	
	i = 0;
	obj = new Zombie[N];
	while (i < N)
	{
		obj[i].set_name(name);
		obj[i].announce();
		i++;
	}
	return (obj);
}