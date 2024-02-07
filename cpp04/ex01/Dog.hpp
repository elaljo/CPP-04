/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:44:55 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 16:50:10 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* instance;
	public:
		Dog();
		Dog(const Dog& rhs);
		Dog&	operator=(const Dog& rhs);
		~Dog();
		void	makeSound()const; 
		std::string getType()const ;
};
#endif