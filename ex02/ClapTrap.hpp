/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:43:40 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 12:49:26 by carlos           ###   ########.fr       */
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
	std::string getName(void);
	int getLife(void);
	int getDamage(void);
	int getEnergy(void);
	void setLife(int life);
	void setDamage(int damage);
	void setEnergy(int energy); 
};


#endif