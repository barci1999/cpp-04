/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:43 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 21:46:50 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("NoType")
{
	std::cout << "Animal default constructor called." << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal parametered constructor called."<<std::endl;
}
Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assigment operator called." << std::endl;
	if (this == &other)
	{
		return(*this);
	}
	this->type = other.type;
	return(*this);
	
}
Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}
std::string Animal::getType() const
{
	return(this->type);
}
void Animal::makeSound() const
{
	std::cout << "Animal "<< Animal::getType() << ":" << " Not a animal so no sound!" << std::endl;
}
void Animal::searchBrain()const
{
	std::cout << Animal::getType() << " : " << "No brain!" << std::endl;
}