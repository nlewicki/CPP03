/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:53:48 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/04 14:13:02 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Thor");
	ScavTrap scav("Hulk");

	clap.attack("Hulk");
	scav.takeDamage(5);
	std::cout << std::endl;
	scav.attack("Thor");
	clap.takeDamage(scav.getAttackDamage());
	clap.beRepaired(5);
	scav.beRepaired(5);
	std::cout << std::endl;
	scav.guardGate();
	return (0);
}
