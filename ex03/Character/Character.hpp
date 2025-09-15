/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:00 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 20:50:58 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
class Character : public ICharacter
{
private:
	std::string name;
	AMateria* materias[4];
public:
	Character();
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();
};


#endif