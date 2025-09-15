/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:48 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 17:23:50 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
class Cat : public AAnimal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat&  other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound()const;
	void searchBrain() const;
};




#endif