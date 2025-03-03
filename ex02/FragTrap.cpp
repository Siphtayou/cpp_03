/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:47:59 by agilles           #+#    #+#             */
/*   Updated: 2025/03/03 17:05:19 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_health = 100;
	this->_energy = 100;
	this->_dps = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &cp): ClapTrap(cp)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 100;
	this->_dps = 30;
	std::cout << "FragTrap Constructor for " << name << " called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " get Destroy." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " ask you if you want to Hive Five ?" << std::endl;
}
