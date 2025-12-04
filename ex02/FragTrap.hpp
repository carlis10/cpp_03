/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:18:30 by carlos            #+#    #+#             */
/*   Updated: 2025/12/04 20:11:00 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
private:
	
public:
	FragTrap(std::string name);
	~FragTrap();
	void highFivesGuys(void);
	FragTrap(const FragTrap& copy);
	FragTrap &operator=(const FragTrap &src);
};

#endif