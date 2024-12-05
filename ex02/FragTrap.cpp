/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:27:51 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/04 14:50:08 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " designed" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap " << getName() << " designed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
	{
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}


void FragTrap::attack(std::string const & target)
{
	if (getHitPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "FragTrap " << getName() << " is out of energy!" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
	if (getHitPoints() == 0)
	{
		std::cout << "FragTrap " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " high fives his opponents!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "FragTrap " << getName() << " is out of energy!" << std::endl;
}
