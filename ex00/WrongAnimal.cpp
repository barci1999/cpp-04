/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:20:53 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 19:28:14 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("NoType")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal parametered constructor called."<<std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assigment operator called." << std::endl;
	if (this == &other)
	{
		return(*this);
	}
	this->type = other.type;
	return(*this);
	
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}
std::string WrongAnimal::getType() const
{
	return(this->type);
}
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal "<< WrongAnimal::getType() << ":" << " Not a WrongAnimal so no sound!" << std::endl;
}