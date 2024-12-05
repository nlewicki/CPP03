/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:54:53 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/04 14:04:14 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) // consturctor with string argument
{
	std::cout << "ClapTrap " << this->name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) // copy constructor
{
	*this = src;
}

ClapTrap::~ClapTrap() // destructor
{
	std::cout << "ClapTrap " << this->name << " died peacefully!" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs) // assignation operator
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	if (energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	if (amount > hitPoints)
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and dies!" << std::endl;
	}
	else
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
		if (hitPoints == 0)
			std::cout << "		and is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and can't be repaired!" << std::endl;
		return ;
	}
	if (energyPoints > 0)
	{
		hitPoints += amount;
		energyPoints -= amount;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}

std::string ClapTrap::getName(void) const
{
	return this->name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return this->energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return this->attackDamage;
}
