/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:06:35 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 20:44:07 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap("clap-trap");
	clap.attack("Jack");
	clap.takeDamage(8);
	clap.beRepaired(7);
	clap.takeDamage(8);
	clap.beRepaired(5);
	clap.takeDamage(4);

	ScavTrap scav("scav-trap");
	scav.attack("Jack");
	scav.beRepaired(7);
	scav.takeDamage(8);
	scav.takeDamage(8);
	scav.beRepaired(5);
	scav.takeDamage(4);
	scav.guardGate();

	FragTrap frag("frag-trap");
	frag.attack("Jack");
	frag.takeDamage(8);
	frag.beRepaired(7);
	frag.takeDamage(8);
	frag.beRepaired(5);
	frag.takeDamage(4);
	frag.guardGate();
	frag.highFivesGuys();
	return 0;
}
