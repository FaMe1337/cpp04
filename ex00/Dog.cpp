/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:58:00 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:58:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	setType("Dog");
	std::cout << "Default Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Dog Destructor" << std::endl;
}


Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Copy Dog Contructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other) 
        Animal::operator=(other);       
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}
