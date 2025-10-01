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
	_brain = new Brain();
	std::cout << "Default Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Default Dog Destructor" << std::endl;
}


Dog::Dog(const Dog &copy) : Animal(copy)
{
	_brain = new Brain();
	std::cout << "Copy Dog Contructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other) 
	{
        Animal::operator=(other);       
        delete _brain;
        _brain = new Brain(*other._brain);
    }
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}

Brain& Dog::getBrain() const
{
	return *_brain;
}