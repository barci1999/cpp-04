/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:34 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 16:38:57 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP
# include<iostream>
# include<string>
class AAnimal
{
protected:
	std::string type;
	AAnimal(std::string type);
public:
	AAnimal(/* args */);
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);

	std::string getType() const;
	virtual void makeSound()const = 0;
	virtual void searchBrain() const = 0;
	virtual ~AAnimal();
};
#endif