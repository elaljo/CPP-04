/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:11 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/16 15:45:20 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	const std::string& getName() const;
	void	setName(const std::string&);
	void	setWeapon(Weapon);
	void	attack();
	HumanB(const std::string&);
	HumanB();
	~HumanB();
};

#endif