/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:09:24 by agilles           #+#    #+#             */
/*   Updated: 2025/02/26 15:48:32 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _health(10), _energy(10), _dps(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
	*this = cp;
	std::cout << "ClapTrap Copy Constructor Called you have now two ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name): _health(10), _energy(10), _dps(0)
{
	std::cout << "ClapTrap Named Constructor Called" << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named : " << this->_name << " has been destroy" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = cp._name;
	this->_health = cp._health;
	this->_energy = cp._energy;
	this->_dps = cp._dps;

	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_health <= 0)
		std::cout << "Why do you want to ClapTrap " << this->_name << " corpse try to attack HIS DEAD DUDE" << std::endl;
	else if (this->_dps > 0 && this->_energy > 0)
		std::cout << "ClapTrap " << this->_name << " attack : " << target << " causing " << this->_dps << " damage" << std::endl;
	else if (this->_dps <= 0 && this->_energy > 0)
		std::cout << "ClapTrap " << this->_name << " try to attack : " << target << " but his not able to attack (0 dps) so nothing happen..." << std::endl;
	else if (this->_dps > 0 && this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " try to attack : " << target << " but his to weak to attack (0 energy)so nothing happen..." << std::endl;
	else
		std::cout << "I don't know what ClapTrap " << this->_name << " try to do but with no energy and no damage " << target << " don't worry about it" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health <= 0)
		std::cout << "Stop bullying ClapTrap " << this->_name << " his already on the ground. Please just Stop" << std::endl;
	else if (this->_health > amount)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage" << std::endl;
		this->_health -= amount;
	}
	else if (this->_health <= amount)
	{
		std::cout << "Oh Oh hell no, ClapTrap " << this->_name << " just die... Rest In Peace little " << this->_name << std::endl;
		this->_health = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy left to repaired itself, sad" << std::endl;
	else if (this->_health <= 0)
		std::cout << "Hmmm i'm not sure ClapTrap " << this->_name << " his able to repair itself dead like that..." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " repaired itself and gain " << amount << " health" << std::endl;
		this->_health += amount;
		this->_energy--;
	}
}
