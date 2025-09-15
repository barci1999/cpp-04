/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:34 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 16:38:57 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include<iostream>
# include<string>
class Animal
{
protected:
	std::string type;
	Animal(std::string type);
public:
	Animal(/* args */);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	std::string getType() const;
	virtual void makeSound()const = 0;
	virtual void searchBrain() const = 0;
	virtual ~Animal();
};
#endif