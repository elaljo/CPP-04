/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:02:20 by moelalj           #+#    #+#             */
/*   Updated: 2024/02/01 21:24:05 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
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
		bool	operator>(const Fixed &rhs)const;
		bool	operator<(const Fixed &rhs)const;
		bool	operator>=(const Fixed &rhs)const;
		bool	operator<=(const Fixed &rhs)const;
		bool	operator==(const Fixed &rhs)const;
		bool	operator!=(const Fixed &rhs)const;
		Fixed operator*(const Fixed &rhs)const; 
		Fixed operator+(const Fixed &rhs)const;
		Fixed operator-(const Fixed &rhs)const;
		Fixed operator/(const Fixed &rhs)const;
			//pre-fix  
		Fixed operator++();
		Fixed operator--();
			//post-fix
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed	min(const Fixed&, const Fixed&);
		static Fixed	max(const Fixed&, const Fixed&);
		static Fixed max(Fixed &n1, Fixed &n2);
		static Fixed min(Fixed &n1, Fixed &n2);
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};
	std::ostream& operator<<(std::ostream& cout, const Fixed& copy);
	
#endif