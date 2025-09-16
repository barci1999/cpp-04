/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:42:14 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/16 17:17:32 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

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
void AMateria::use(ICharacter& target) 
{
	(void)target;
}
std::string const & AMateria::getType() const 
{
    return this->type;
}