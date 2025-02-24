/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:45:08 by agilles           #+#    #+#             */
/*   Updated: 2025/02/24 16:08:16 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool	_guarding_gate;

	public:
		ScavTrap();
		ScavTrap(const ScavTrap &cp);
		ScavTrap(std::string name);

		virtual ~ScavTrap();

		void attack(const std::string &target);
		void guardGate(void);
};
