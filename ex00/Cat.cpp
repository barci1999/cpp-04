/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:46 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 19:14:50 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called." << std::endl; 
}
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called." << std::endl;
}
Cat& Cat::operator=(const Cat& other) 
{
	std::cout << "Cat assignment operator called." << std::endl;
	Animal::operator=(other); 
	return(*this);
}
Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}
void Cat::makeSound() const
{
	std::cout << this->getType() << ": MIAUUUUUUUUUUUU!" << std::endl;
}