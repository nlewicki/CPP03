/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:32:24 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/05 12:48:06 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap " << getName() << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	if (getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "ScavTrap " << getName() << " is out of energy!" << std::endl;
}

void ScavTrap::guardGate()
{
	if(getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
	}
}
