/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:43 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 21:46:50 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("NoType")
{
	std::cout << "AAnimal default constructor called." << std::endl;
}
AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal parametered constructor called."<<std::endl;
}
AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
}
AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal assigment operator called." << std::endl;
	if (this == &other)
	{
		return(*this);
	}
	this->type = other.type;
	return(*this);
	
}
AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}
std::string AAnimal::getType() const
{
	return(this->type);
}
void AAnimal::makeSound() const
{
	std::cout << "AAnimal "<< AAnimal::getType() << ":" << " Not a AAnimal so no sound!" << std::endl;
}
void AAnimal::searchBrain()const
{
	std::cout << AAnimal::getType() << " : " << "No brain!" << std::endl;
}