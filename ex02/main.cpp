/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:25:33 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 16:39:46 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"Brain.hpp"
int main() 
{
    /*Animal a;
	a.makeSound();*/

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound(); 

    cat->makeSound(); 
    delete dog;
    delete cat;
    return 0;
}