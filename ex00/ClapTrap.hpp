/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:53:13 by agilles           #+#    #+#             */
/*   Updated: 2025/02/21 16:41:39 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string.h>
# include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_dps;

	public:
	ClapTrap();
	ClapTrap(const ClapTrap &cp);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &cp);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amout);
	void	beRepaired(unsigned int amout);
};
