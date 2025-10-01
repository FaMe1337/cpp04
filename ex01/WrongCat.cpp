/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:58:14 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:58:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	setType("WrongCat");
	std::cout << "Default WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat Destructor" << std::endl;
}


WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "Copy WrongCat Contructor" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if(this != &other)
		this->_type = other.getType();
	return (*this);
}


void WrongCat::makeSound() const
{
	std::cout << "Makes WrongCat sounds" << std::endl;
}