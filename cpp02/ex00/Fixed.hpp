/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:34:49 by moelalj           #+#    #+#             */
/*   Updated: 2024/01/26 18:12:14 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
	private:
		int save_fp;
		static const int exponent;
	public:
		Fixed(const Fixed&);
		Fixed();
		~Fixed();
};
#endif