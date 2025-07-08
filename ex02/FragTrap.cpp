/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:18:20 by carlos            #+#    #+#             */
/*   Updated: 2025/07/08 11:35:04 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
	std::cout << this->getName() + " has been created as FragTrap." << std::endl;
	this->setDamage(30);
	this->setEnergy(100);
	this->setLife(100);
}
FragTrap::~FragTrap()
{
	std::cout << this->getName() + " has been destroyed as FragTrap." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::string ask;

	std::cout << "High Five Guys !!! (enter to high five)." << std::endl;
	std::getline(std::cin, ask);
	if (!ask.empty())
		return ;
}