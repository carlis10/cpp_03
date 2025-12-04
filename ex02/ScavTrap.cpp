/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:39:36 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 20:05:29 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name + " has been created as ScavTrap." << std::endl;
	_damage = 20;
	_energy = 50;
	_life = 100;
}
ScavTrap::~ScavTrap()
{
	std::cout << this->_name + " has been destroyed as ScavTrap." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name + " is now on Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_life <= 0)
		return ;
	std::cout <<"(ScavTrap) "+ _name + " attack " + target + " and does " << _damage << " damage." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		this->_energy = src._energy;
		this->_life = src._life;
		this->_damage = src._damage;
	}

	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}