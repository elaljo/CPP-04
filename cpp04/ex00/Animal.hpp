/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:31:44 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/05 15:20:48 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string getType()const ;
};

#endif