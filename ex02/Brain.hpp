/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:41 by marvin            #+#    #+#             */
/*   Updated: 2025/10/01 11:26:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
			Brain();
			Brain(const Brain& copy);
			Brain &operator=(const Brain &other);
			~Brain();
			void setIdea(int n, std::string idea);
			std::string getIdea(int n);

	private:
			std::string _ideas[100];
};

#endif