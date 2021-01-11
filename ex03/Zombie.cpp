/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:51:40 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 15:25:21 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(zombieType type, std::string name) : _type(type), _name(name), _life((type == big_one) ? 3 : 1)
{
	displayInfo();
	std::cout << "~Born~" << std::endl;
}

Zombie::~Zombie(void)
{
	displayInfo();
	std::cout << "~Destroyed~" << std::endl;
}

void							Zombie::displayInfo(void)
{
	std::string		type[3] = {"WALKER", "RUNNER", "BIG_ONE"};

	std::cout << '<' << _name << " (" << type[_type] << ")> ";
}

void							Zombie::announce(void)
{
	displayInfo();
	std::cout << rdm::randBetweenStrings(5, "Gwahrghhh...", "Grrhh...", "Agrougrou.", "Graaaaaaaaaaaaah!!!!", "Hey salut à tous les amis, c'est david lafarge pokémon!") << std::endl;
}

template <typename type> type	rdm::randBetween(type a, type b)
{
	return (a + (type)std::rand() % (b - a + 1));
}

std::string						rdm::randBetweenStrings(int ac, ...)
{
	va_list			av;
	int				index;

	va_start(av, ac);
	index = randBetween<int>(1, ac);
	while (--index)
		va_arg(av, char*);
	return (va_arg(av, char*));
}
