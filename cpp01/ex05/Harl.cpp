/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:48:37 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/19 19:57:05 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more! " << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void	Harl::complain(std::string level)
{
		int i = 0;
  	std::string levels[4] = {"DEBUG", "ERROR", "WARNING", "INFO"};
    typedef void (Harl::*func)();

    func func_arr[4] = {&Harl::debug, &Harl::error, &Harl::warning, &Harl::info};
		while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*func_arr[i])(); 
            return ;
        }
				i++;
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}