/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:06:35 by carlos            #+#    #+#             */
/*   Updated: 2025/07/04 12:13:40 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("clap-trap");
	claptrap.attack("Jack");
	claptrap.takeDamage(8);
	claptrap.beRepaired(7);
	claptrap.takeDamage(8);
	claptrap.beRepaired(5);
	claptrap.takeDamage(4);
	return 0;
}
