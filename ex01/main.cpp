/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:36:19 by agilles           #+#    #+#             */
/*   Updated: 2025/02/26 17:27:33 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "TESTING CLAPTRAT" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap	jerem("Jeremy");
		ClapTrap	jerem2(jerem);
		ClapTrap	chepa;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		jerem.attack("jerem2");
		jerem2.takeDamage(0);
		jerem2.beRepaired(10);
		jerem.takeDamage(10);
		jerem.beRepaired(10);
		chepa.attack("Jeremy");
		jerem.takeDamage(0);

		for (int i = 0; i < 11; i++)
			chepa.beRepaired(10);
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

	}

	std::cout << std::endl << "TESTING SCAVTRAP" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ScavTrap c;
		ScavTrap d("Tonton");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		c.attack("TataTrap");
		// for (int i = 0; i < 50; i++)
		// 	c.attack("TataTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Tonton-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("TataTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}
