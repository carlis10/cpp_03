/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:18:20 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 20:06:06 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
	std::cout << _name + " has been created as FragTrap." << std::endl;
	_damage = 30;
	_energy = 100;
	_life = 100;
}
FragTrap::~FragTrap()
{
	std::cout << _name + " has been destroyed as FragTrap." << std::endl;
}

void FragTrap::highFivesGuys()
{

	std::cout << "High Five Guys !!!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		this->_energy = src._energy;
		this->_life = src._life;
		this->_damage = src._damage;
	}

	return *this;
}

FragTrap::FragTrap(const FragTrap &copy) : ScavTrap(copy)
{
	*this = copy;
}