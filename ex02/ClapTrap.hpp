/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:43:40 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 19:53:45 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int _life;
	int _damage;
	int _energy;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator=(const ClapTrap &src);
	void attack(const std::string& target);
	void takeDamage(unsigned int damage);
	void beRepaired(unsigned int amount);
};


#endif