/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:56 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/16 17:29:55 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_materias[i] =  0;
	}
	
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (other._materias[i])
		{
			this->_materias[i] = other._materias[i]->clone();
		}
		else
			this->_materias[i] = 0;
		
	}
	
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
	{
		return *this;		
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (other._materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = 0;
	}
	return *this;
	
	
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}
void MateriaSource::learnMateria(AMateria* to_learn)
{
	if (!to_learn)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == 0)
		{
			this->_materias[i] = to_learn->clone();
			delete to_learn;
			return;
		}
	}
	delete to_learn;
	
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			return this->_materias[i]->clone();
		}
	}
	return(0);
	
}