/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:51:46 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 15:25:55 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(std::uint32_t n) : _size(n)
{
	zombieType		type;
	std::string		name;

	_horde = new Zombie *[n];
	for (int i = 0; i < n; i++)
	{
		type = (zombieType)rdm::randBetween<int>(0, 2);
		name = rdm::randBetweenStrings(3, "Pierre", "Paul", "Jacques");
		_horde[i] = new Zombie(type, name);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	for (int i = 0; i < _size; i++)
		delete _horde[i];
	delete[] _horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _size; i++)
		_horde[i]->announce();
}
