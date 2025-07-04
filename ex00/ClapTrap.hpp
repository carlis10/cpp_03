/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:43:40 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 12:10:16 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;
	int _life;
	int _damage;
	int _energy;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int damage);
	void beRepaired(unsigned int amount);
};


#endif