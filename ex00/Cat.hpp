/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:48 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 18:58:23 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat&  other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound()const;
};




#endif