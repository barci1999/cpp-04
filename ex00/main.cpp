/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:59 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 20:25:14 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	const WrongAnimal* p = new WrongAnimal();
	const WrongAnimal* t = new WrongCat();
	std::cout << t->getType() << " " << std::endl;
	std::cout << p->getType() << " " << std::endl;
	t->makeSound();
	p->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete t;
	delete p;
	delete i;
}