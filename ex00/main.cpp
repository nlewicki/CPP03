/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:53:48 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/03 12:32:23 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1("IronMan");
	ClapTrap clap2("Thanos");

	clap1.attack("Thanos");
	clap2.takeDamage(5);
	clap2.attack("IronMan");
	clap1.takeDamage(5);
	clap2.attack("IronMan");
	clap1.takeDamage(5);

	std::cout << std::endl;
	clap1.attack("Thanos");
	clap2.takeDamage(4);
	clap2.takeDamage(4);
	clap2.beRepaired(5);
}
