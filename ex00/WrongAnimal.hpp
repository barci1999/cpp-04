/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:20:56 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 19:23:15 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include<iostream>
# include<string>
class WrongAnimal
{
protected:
	std::string type;
	WrongAnimal(std::string type);
public:
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

	std::string getType() const;
	void makeSound()const;
	~WrongAnimal();
};
#endif