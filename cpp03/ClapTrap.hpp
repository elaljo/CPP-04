/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:18:59 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/03 14:27:41 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	private:
		std::string name;
		int Hit_points;
		int Energy_points;
		int Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& rhs);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
#endif