/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:21:01 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 19:34:52 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat&  other);
	WrongCat& operator=(const WrongCat& other);
	~WrongCat();
	void makeSound()const;
};




#endif