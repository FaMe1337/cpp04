/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:58:02 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:58:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
			Dog();
			~Dog();
			Dog(const Dog& copy);
			Dog& operator=(const Dog& other);
			void makeSound() const;
			Brain& getBrain() const;
			
	private:
			Brain* _brain;	
};

#endif