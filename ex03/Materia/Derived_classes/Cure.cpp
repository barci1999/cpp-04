/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:51 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 23:40:44 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include "Cure.hpp"

Cure::Cure()  : AMateria("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}
Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure copy constructor called." <<  std::endl;
}
Cure& Cure::operator=(const Cure& other)
{
	std::cout << "Cure assignment operator called." << std::endl;
	AMateria::operator=(other);
	return(*this);
}
Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

/* methods */

AMateria* Cure::clone() const
{
	return new Cure(*this);
}
void Cure::use(ICharacter& target)
{
	std::cout << getType() << " * heals " << target.getName() << "'s wounds *" << std::endl;
}