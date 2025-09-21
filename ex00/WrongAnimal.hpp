/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:58:09 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:58:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONANIMAL_HPP
#define WRONANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
			WrongAnimal();
			~WrongAnimal()
			WrongAnimal(const Animal& other);
			WrongAnimal& operator=(const Animal& other);
			std::string setType();
			void makeSound();

	protected:
		std:string _type;
};

#endif