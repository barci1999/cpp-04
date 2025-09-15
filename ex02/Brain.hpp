/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:28:57 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 20:52:34 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
class Brain
{
private:
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();
};




#endif