/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:42:17 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 22:28:17 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

static AMateria ** add_to_floor(AMateria **floor,AMateria *to_add)
{
	int i = 0;
	AMateria** new_floor;
	while (floor[i])
		i++;
	new_floor = new AMateria*[i + 2];
	for (size_t t = 0; floor[t]; t++)
		new_floor[t] = floor[t];
	new_floor[i] = to_add;
	new_floor[i + 1] = 0;
	delete[] floor;
	return(new_floor);
}

int main(void)
{
	AMateria **floor;
	floor = new AMateria*;
	
}