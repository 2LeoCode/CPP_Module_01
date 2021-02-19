/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 11:01:04 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:31:40 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, zombieType type) : c_next(nullptr), c_name(name), c_type(type)
{
	if (c_type == bigOne)
		c_life = 3;
	else
		c_life = 1;
	displayTypeAndName();
	std::cout << "~Born~" << std::endl;
}

Zombie::~Zombie(void)
{
	displayTypeAndName();
	std::cout << "~Destroyed~" << std::endl;
}

void			Zombie::displayTypeAndName(void)
{
	std::string		s[3] = {"WALKER", "RUNNER", "BIG ONE"};

	std::cout << '<' << c_name << " (" << s[c_type] << ")> ";
}

Zombie							*Zombie::addback(std::string name, zombieType type)
{
	Zombie	*tmp;

	if (!c_next)
		return (c_next = new Zombie(name, type));
	else
	{
		for (tmp = c_next; tmp->next(); tmp = tmp->next())
			continue ;
		tmp->setnext(new Zombie(name, type));
	}
	return (tmp->next());
}

Zombie							*Zombie::last(void)
{
	Zombie	*tmp = nullptr;
	Zombie	*head = c_next;

	while (head)
	{
		tmp = head;
		head = head->next();
	}
	return (tmp);
}

void							Zombie::advert(void)
{
	displayTypeAndName();
	std::cout << randBetweenStrings(5, "Gwahrghhh...", "Grrhh...", "Agrougrou.", "Graaaaaaaaaaaaah!!!!", "Hey salut à tous les amis, c'est david lafarge pokémon!") << std::endl;
}

template <typename type> type	randBetween(type a, type b)
{
	return (a + static_cast<type>(std::rand() % (b - a + 1)));
}

std::string						randBetweenStrings(int ac, ...)
{
	va_list			av;
	int				index;

	va_start(av, ac);
	index = randBetween<int>(1, ac);
	while (--index)
		va_arg(av, char*);
	return (va_arg(av, char*));
}

std::string						ft_strcapitalize(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (std::islower(s[i]))
			s[i] -= 32;
	return (s);
}
