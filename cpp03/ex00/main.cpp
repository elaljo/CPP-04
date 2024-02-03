/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:30:14 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/03 15:55:40 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap p1;
	p1.attack("target");
	p1.attack("target");
	p1.attack("target");
	p1.takeDamage(1);
	p1.beRepaired(12);

	return 0;
}