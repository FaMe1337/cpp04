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

#include "Animal_hpp"

Animal::Animal(): type("Animal")
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

Animal &Animal::operator=(const Animal &src)
{
	if(this != &src)
		this->_type = src.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "Makes Animal sounds" << std::endl;
}