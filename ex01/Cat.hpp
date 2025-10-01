/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:57:58 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 13:57:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
			Cat();
			~Cat();
			Cat(const Cat& copy);
			Cat& operator=(const Cat& other);
			virtual void makeSound() const;
			Brain& getBrain() const;

	private:
			Brain* _brain;
};

#endif