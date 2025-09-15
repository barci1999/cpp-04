/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:46 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 17:23:50 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat constructor called." << std::endl; 
	this->brain = new Brain();
}
Cat::Cat(const Cat& other) : AAnimal(other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->brain = new Brain(*other.brain);
}
Cat& Cat::operator=(const Cat& other) 
{
	std::cout << "Cat assignment operator called." << std::endl;
	AAnimal::operator=(other); 
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return(*this);
}
Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}
void Cat::makeSound() const
{
	std::cout << this->getType() << ": MIAUUUUUUUUUUUU!" << std::endl;
}
void Cat::searchBrain()const
{
	std::cout << this->getType() << " brain: " << brain << std::endl;
}