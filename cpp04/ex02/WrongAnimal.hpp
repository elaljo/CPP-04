/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:42:58 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/06 11:57:59 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& rhs);
		WrongAnimal&	operator=(const WrongAnimal& rhs);
		~WrongAnimal();
		void	makeSound() const;
};
#endif