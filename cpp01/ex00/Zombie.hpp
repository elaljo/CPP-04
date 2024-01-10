/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:03:38 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/10 17:32:33 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string zombie_name;
	public:
		void	announce(void);
		void	set_name(std::string name);
		Zombie();
		~Zombie();
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif