/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:28:54 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 21:01:11 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Default idea";
	
}
Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	
}
Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assingment opperator called." << std::endl;
	if (this == &other)
	{
		return *this;
	}
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return(*this);
	
}

Brain::~Brain()
{
	std::cout << "Brain destructos called." << std::endl;
}