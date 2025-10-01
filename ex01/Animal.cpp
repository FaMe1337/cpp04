/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:57:53 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:57:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default Animal Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal Destructor" << std::endl;
}


Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal Contructor" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	if(this != &other)
		this->_type = other.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::setType(std::string type)
{
	_type = type;
}

void Animal::makeSound() const
{
	std::cout << "make Animal sounds" << std::endl;
}