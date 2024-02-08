/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:41:24 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/08 15:03:53 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

void init()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	{
		const Animal* x[6];
		for(int i = 0; i < 6; i++)
		{
			if (i < 3)
				x[i] = new Cat; 
			else
				x[i] = new Dog;
		}
			for(int i = 0; i < 6; i++)
				delete x[i];
	}
	
	delete j;
	delete i;
}
int main()
{
	init();
	//system("leaks -q Polymorphism");
	return (0);
}