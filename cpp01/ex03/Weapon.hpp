/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:16:14 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/16 15:27:32 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string Type;
public:
	const std::string& getType() const;
	void	setType(const std::string &);
	Weapon(const std::string weapon_type);
	Weapon();
	~Weapon();
};

#endif
