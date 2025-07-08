/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:43:38 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 13:07:55 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
	std::cout << this->getName() + " has been created as ClapTrap." << std::endl;
	_damage = 0;
	_life = 10;
	_energy = 10;
	
}
ClapTrap::~ClapTrap()
{
	std::cout << _name + " has been destroyed as ClapTrap." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_life <= 0)
		return ;
	for (unsigned int i = 0; i < amount; i++)
	{
		if (_energy <= 0)
		{
			std::cout << _name + " does not have enough energy." << std::endl;
			return ;
		}
		_life++;
		_energy--;
		std::cout << _name + " has recovered 1 hp." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int damage)
{
		if (_life <= 0)
			return ;
		_life -= damage;
		if (_life < 0)
			_life = 0;
		std::cout << _name + " has taken " << damage << " damage and have " << _life << " hp." << std::endl;
		if (_life == 0)
			std::cout << _name + " is dead" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_life <= 0)
		return ;
	std::cout << _name + " attack " + target + " and does " << _damage << " damage." << std::endl;
}

void ClapTrap::setDamage(int damage)
{
	_damage = damage;
}
void ClapTrap::setEnergy(int energy)
{
	_energy = energy;
}
void ClapTrap::setLife(int life)
{
	_life = life;
}

std::string ClapTrap::getName()
{
	return (this->_name);
}

int ClapTrap::getDamage()
{
	return (this->_damage);
}
int ClapTrap::getLife()
{
	return (this->_life);
}
int ClapTrap::getEnergy()
{
	return (this->_energy);
}
