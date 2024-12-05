/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:53:48 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/04 14:48:34 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Thor");
	ScavTrap scav("Hulk");
	FragTrap frag("Captain America");

	clap.attack("Hulk");
	scav.takeDamage(5);
	std::cout << std::endl;

	scav.attack("Thor");
	clap.takeDamage(scav.getAttackDamage());
	clap.beRepaired(5);
	scav.beRepaired(5);
	std::cout << std::endl;
	
	frag.attack("Hulk");
	scav.takeDamage(frag.getAttackDamage());

	std::cout << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
