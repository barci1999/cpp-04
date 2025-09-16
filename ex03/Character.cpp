/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:47 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/16 17:23:34 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	this->name = "NoName";
	for (int i = 0; i < 4; i++)
		this->materias[i] = 0;
}
Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materias[i] = 0;
}
Character::Character(const Character& other)
{
	this->name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if(other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = 0;
	}
}
Character& Character::operator=(const Character& other)
{
	if (this == &other)
		return (*this);
	this->name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i]= 0;
	}
	return(*this);
}
Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}
const std::string& Character::getName() const
{
	return(this->name);
}
void Character::equip(AMateria* m)
{
	if (m == 0)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == 0)
		{
			this->materias[i] = m;
			return;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return;
	this->materias[idx] = 0;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0 )
		return;
	if (this->materias[idx] == 0)
		return;
	this->materias[idx]->use(target);
}
AMateria* Character::getMateria(int idx)
{
	if (idx < 0 || idx >= 4)
		return(0);
	return this->materias[idx];
}