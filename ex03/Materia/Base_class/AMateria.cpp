/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:42:14 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 23:30:40 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "NoType";
}
AMateria::AMateria(std::string const & type)
{
	this->type = type;
}
AMateria::AMateria(const AMateria& other)
{
	this->type = other.getType();
}
AMateria& AMateria::operator=(const AMateria& other)
{
	if (this == &other)
	{
		return (*this);
	}
	this->type = other.getType();
	return(*this);
}
AMateria::~AMateria()
{
}
/* Methods */
AMateria* AMateria::clone() const
{
}
void AMateria::use(ICharacter& target) 
{
}