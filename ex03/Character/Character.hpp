/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:33:00 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/15 23:02:04 by pablalva         ###   ########.fr       */
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

	std::string const & getName() const;
	AMateria* getMateria(int idx);
	void use(int idx, ICharacter& target);
	void unequip(int idx);
	void equip(AMateria* m);
};


#endif