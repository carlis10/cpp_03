/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:06:35 by carlos            #+#    #+#             */
/*   Updated: 2025/07/14 13:42:29 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap *claptrap = new ScavTrap("Claptrap");
	claptrap->attack("Jack");
	claptrap->takeDamage(8);
	claptrap->beRepaired(7);
	claptrap->takeDamage(8);
	claptrap->beRepaired(5);
	claptrap->takeDamage(4);
	claptrap->guardGate();
	return 0;
}
