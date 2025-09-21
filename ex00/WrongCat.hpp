/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:58:12 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:58:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONCAT_HPP

#include "WrongAnimal_hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			~WrongCat()
			WrongCat(const WrongCat& other);
			WrongCat& operator=(const WrongCat& other);
			void makeSound();
};

#endif