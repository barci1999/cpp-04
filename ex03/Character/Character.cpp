/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:47 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 20:46:00 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "NoName";
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = 0;
}
Character::Character(const Character& other)
{
	this->name = other.getName();
	delete this->materias;
	for (size_t i = 0; i < 4; i++)
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
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
	for (size_t i = 0; i < 4; i++)
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
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}