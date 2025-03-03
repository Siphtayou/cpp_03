/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:45:04 by agilles           #+#    #+#             */
/*   Updated: 2025/02/26 16:48:02 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_health = 100;
	this->_energy = 50;
	this->_dps = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp): ClapTrap(cp)
{
	this->_guarding_gate = cp._guarding_gate;
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_dps = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Constructor for " << name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " get Destroy." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_health <= 0)
		std::cout << "Why do you want to ScavTrap " << this->_name << " corpse try to attack HIS DEAD DUDE" << std::endl;
	else if (this->_dps > 0 && this->_energy > 0)
		std::cout << "ScavTrap " << this->_name << " attack : " << target << " causing " << this->_dps << " damage" << std::endl;
	else if (this->_dps <= 0 && this->_energy > 0)
		std::cout << "ScavTrap " << this->_name << " try to attack : " << target << " but his not able to attack (0 dps) so nothing happen..." << std::endl;
	else if (this->_dps > 0 && this->_energy <= 0)
		std::cout << "ScavTrap " << this->_name << " try to attack : " << target << " but his to weak to attack (0 energy)so nothing happen..." << std::endl;
	else
		std::cout << "I don't know what ScavTrap " << this->_name << " try to do but with no energy and no damage " << target << " don't worry about it" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_guarding_gate)
		std::cout << "The Guarding gate system of  ScavTrap " << this->_name << " already activate" << std::endl;
	else
	{
		this->_guarding_gate = true;
		std::cout << "The Guarding gate system of  ScavTrap " << this->_name << " is now active" << std::endl;
	}
}

