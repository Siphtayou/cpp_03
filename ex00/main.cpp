/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:36:19 by agilles           #+#    #+#             */
/*   Updated: 2025/02/21 18:13:33 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	jerem("Jeremy");
	ClapTrap	jerem2(jerem);
	ClapTrap	chepa;

	jerem.attack("jerem2");
	jerem2.takeDamage(0);
	jerem2.beRepaired(10);
	jerem.takeDamage(10);
	jerem.beRepaired(10);
	chepa.attack("Jeremy");
	jerem.takeDamage(0);

	for (int i = 0; i < 11; i++)
		chepa.beRepaired(10);

	return (0);
}
