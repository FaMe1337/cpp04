/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:39 by marvin            #+#    #+#             */
/*   Updated: 2025/10/01 11:26:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor" << std::endl;
}


Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain Contructor" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &other)
{
	if(this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int n)
{
	if (n < 0 || n > 100)
	{
		std::cout << "Please use a number between 0-100\n";
		return "";
	}
	if (_ideas[n].empty())
	{
		std::cout << "I have no idea of what im doing\n";
		return "";
	}
	return _ideas[n];
}

void Brain::setIdea(int n, std::string idea)
{
	if (n < 0 || n > 100)
	{
		std::cout << "Please use a number between 0-100\n";
		return;
	}
	_ideas[n] = idea;
}