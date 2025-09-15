/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:51 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 17:23:50 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(/* args */) : AAnimal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
	this->brain = new Brain();
}
Dog::Dog(const Dog& other): AAnimal(other)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->brain = new Brain(*other.brain);
}
Dog& Dog::operator=(const Dog& other) 
{
	std::cout << "Dog assignmet operator called." << std::endl;
	AAnimal::operator=(other);
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return(*this);
}
Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << ": GUAUUUUUUUUUUUUUU!!!" << std::endl;
}
void Dog::searchBrain()const
{
	std::cout << this->getType() << " brain: " << brain << std::endl;
}
