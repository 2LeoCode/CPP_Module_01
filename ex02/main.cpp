/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:50:04 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/09 22:06:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent		event;
	Zombie			*zombie[10];

	std::srand(std::time(nullptr));
	zombie[0] = event.newZombie("Jean-Bernard");
	event.setZombieType(walker);
	zombie[0] = event.newZombie("Josephin");
	zombie[0]->advert();
	event.takeDamage(&zombie[0], "Sword");
	zombie[0] = event.newZombie("Bourbier");
	zombie[1] = event.bite(zombie[0]);
	for (int i = 2; i < 10; i++)
		zombie[i] = event.randomChump();
	event.remove(zombie[5]);
	zombie[5] = nullptr;
	for (int i = 0; i < 10; i++)
	{
		event.takeDamage(&zombie[i], "Gun");
		if (zombie[i])
			zombie[i]->advert();
	}
	return (0);
}
