/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:51 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 19:17:00 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */) : Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}
Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy constructor called." << std::endl;
}
Dog& Dog::operator=(const Dog& other) 
{
	std::cout << "Dog assignmet operator called." << std::endl;
	Animal::operator=(other);
	return(*this);
}
Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << ": GUAUUUUUUUUUUUUUU!!!" << std::endl;
}
