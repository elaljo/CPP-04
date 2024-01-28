/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:32:36 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/28 16:52:28 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int save_fp;
		static const int save_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};
	std::ostream& operator<<(std::ostream& cout, const Fixed& copy); 
#endif