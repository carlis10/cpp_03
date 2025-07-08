/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:06:35 by carlos            #+#    #+#             */
/*   Updated: 2025/07/08 11:28:57 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap claptrap("clap-trap");
	claptrap.attack("Jack");
	claptrap.takeDamage(8);
	claptrap.beRepaired(7);
	claptrap.takeDamage(8);
	claptrap.beRepaired(5);
	claptrap.takeDamage(4);
	claptrap.guardGate();
	claptrap.highFivesGuys();
	return 0;
}
