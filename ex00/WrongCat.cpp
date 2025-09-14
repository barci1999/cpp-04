/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:20:59 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 19:26:09 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called." << std::endl; 
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other) 
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	WrongAnimal::operator=(other); 
	return(*this);
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << this->getType() << ": MIAUUUUUUUUUUUU!" << std::endl;
}