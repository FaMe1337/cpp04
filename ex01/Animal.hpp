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
			virtual ~Animal();
			Animal(const Animal& copy);
			Animal& operator=(const Animal& other);
			virtual std::string getType() const;
			void setType(std::string type);
			virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif