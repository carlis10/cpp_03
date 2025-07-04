/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:39:36 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 12:57:49 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->getName() + " has been created as ScavTrap." << std::endl;
	this->setDamage(20);
	this->setEnergy(50);
	this->setLife(100);
}
ScavTrap::~ScavTrap()
{
	std::cout << this->getName() + " has been destroyed as ScavTrap." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->getName() + " is now on Gate keeper mode." << std::endl;
}