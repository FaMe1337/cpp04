/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:57:55 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:57:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	setType("Cat");
	_brain = new Brain();
	std::cout << "Default Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Default Cat Destructor" << std::endl;
}


Cat::Cat(const Cat &copy) : Animal(copy)
{
	_brain = new Brain(*copy._brain);
	std::cout << "Copy Cat Contructor" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meoooowww!" << std::endl;
}

Brain& Cat::getBrain() const
{
	return *_brain;
}