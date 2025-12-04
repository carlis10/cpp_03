/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:06:35 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 20:43:38 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	return 0;
}
