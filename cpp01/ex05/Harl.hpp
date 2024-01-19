/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:48:39 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/19 20:05:17 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void complain(std::string level);
}; 

#endif