/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:57:49 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:57:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
	public:
			Animal();
			~Animal()
			Animal(const Animal& other);
			Animal& operator=(const Animal& other);
			std::string setType();
			virtual void makeSound();

	protected:
		std:string _type;
};

#endif