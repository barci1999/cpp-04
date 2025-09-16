/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:53 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/16 17:13:59 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
Ice::Ice()  : AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}
Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice copy constructor called." <<  std::endl;
}
Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Ice assingment opperator called." << std::endl;
	AMateria::operator=(other);
	return(*this);
}
Ice::~Ice()
{
	std::cout << "Ice destructo called." << std::endl;
}

/* methods */

AMateria* Ice::clone() const
{
	return new Ice(*this);
}
void Ice::use(ICharacter& target)
{
	std::cout << getType() << " * shoot an ice bolt at " << target.getName() << " *" << std::endl;
}