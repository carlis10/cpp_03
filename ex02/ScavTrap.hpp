/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:36:57 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 20:56:40 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
	ScavTrap(const ScavTrap& copy);
	ScavTrap &operator=(const ScavTrap &src);
};

#endif
