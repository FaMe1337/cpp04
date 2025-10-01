/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:58:09 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:58:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
			WrongAnimal();
			~WrongAnimal();
			WrongAnimal(const WrongAnimal& copy);
			WrongAnimal& operator=(const WrongAnimal& other);
			std::string getType() const;
			void setType(std::string type);
			void makeSound() const;

	protected:
		std::string _type;
};

#endif