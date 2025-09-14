/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:28:10 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 21:55:36 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"Brain.hpp"
int main(void)
{
	Animal* Array[10];
	Dog A;
	Cat B;
	Dog C;
	Cat D;
	C = A;
	D = B;
	
	A.searchBrain();
	B.searchBrain();
	C.searchBrain();
	D.searchBrain();
	std::cout << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		if(i < 5)
			Array[i] = new Dog(A);
		else
			Array[i] = new Cat(B);
	}
	for (size_t i = 0; i < 10; i++)
	{
		Array[i]->searchBrain();
	}	
	for (size_t i = 0; i < 10; i++)
		delete Array[i];
	
}