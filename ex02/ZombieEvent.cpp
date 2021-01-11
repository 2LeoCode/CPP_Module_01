/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:59:54 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/09 22:10:42 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : c_type(nullptr), c_zombieList(nullptr)
{
}

ZombieEvent::~ZombieEvent(void)
{
	if (c_type)
		delete c_type;
	clear();
}

void			ZombieEvent::setZombieType(zombieType type)
{
	if (!c_type)
		c_type = new zombieType;
	*c_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	if (!c_type)
	{
		std::cout << "Error: Zombie type not specified" << std::endl;
		return (NULL);
	}
	if (!c_zombieList)
		c_zombieList = new Zombie(name, *c_type);
	else
		return (c_zombieList->addback(name, *c_type));
	return (c_zombieList);
}

void			ZombieEvent::clear(void)
{
	Zombie		*head = c_zombieList;

	while (head)
	{
		head = head->next();
		delete c_zombieList;
		c_zombieList = head;
	}
}

void			ZombieEvent::remove(Zombie *zombie)
{
	if (!zombie)
		return ;

	Zombie		*cur = c_zombieList;
	Zombie		*head = nullptr;
	Zombie		*prev = nullptr;

	while (cur)
	{
		head = cur->next();
		if (cur == zombie)
		{
			if (prev)
				prev->setnext(head);
			else
				c_zombieList = head;
			delete cur;
		}
		prev = cur;
		cur = head;
	}
}

Zombie			*ZombieEvent::bite(Zombie *zombie)
{
	std::string		name = randBetweenStrings(3, "Pierre", "Paul", "Jaques");
	zombieType		type = (zombieType)randBetween<int>(0, 2);

	zombie->displayTypeAndName();
	std::cout << "Bit someone! He's going to turn!" << std::endl;
	setZombieType(type);
	return (zombie->addback(name, *c_type));
}

void			ZombieEvent::takeDamage(Zombie **zombie, std::string weaponName)
{
	int		dmg = 1;

	if (!zombie || !*zombie)
		return ;
	(*zombie)->displayTypeAndName();
	weaponName = ft_strcapitalize(weaponName);
	if (!std::strcmp(weaponName.c_str(), "GUN"))
	{
		int		random = randBetween<int>(0, 3);

		std::cout << "Is taking fire!" << std::endl;
		(*zombie)->displayTypeAndName();
		if (!random)
			std::cout << "Missed gun shot. ";
		else if (random == 3)
			std::cout << "Headshot! ";
		else
			std::cout << "Great shot! ";
		dmg = random;
	}
	else
		std::cout << "Got hit with " << weaponName << ". ";
	std::cout << "Took " << dmg << " damage." << std::endl;
	(*zombie)->hit(dmg);
	if ((*zombie)->isdead())
	{
		remove(*zombie);
		*zombie = NULL;
	}
}

Zombie			*ZombieEvent::randomChump(void)
{
	std::string		name = randBetweenStrings(3, "Pierre", "Paul", "Jacques");
	Zombie			*newguy;

	setZombieType((zombieType)randBetween<int>(0, 2));
	newguy = newZombie(name);
	newguy->advert();
	return (newguy);
}
