/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:24:18 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 18:41:56 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(ft::strcapitalize(name)), _weapon(nullptr)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	std::cout << _name;

	if (_weapon)
		std::cout << " attacks with his " << _weapon->getType();
	else
		std::cout << " has no weapon";
	std::cout << std::endl;
}
