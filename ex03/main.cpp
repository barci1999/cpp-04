/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:42:17 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/16 17:27:55 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
// static AMateria ** add_to_floor(AMateria **floor,AMateria *to_add)
// {
// 	int i = 0;
// 	AMateria** new_floor;
// 	while (floor[i])
// 		i++;
// 	new_floor = new AMateria*[i + 2];
// 	for (size_t t = 0; floor[t]; t++)
// 		new_floor[t] = floor[t];
// 	new_floor[i] = to_add;
// 	new_floor[i + 1] = 0;
// 	delete[] floor;
// 	return(new_floor);
// }

// int main(void)
// {
// 	AMateria **floor;
// 	floor = new AMateria*;
	
// } 
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}