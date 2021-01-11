/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:05:12 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/11 19:08:15 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

static void		callAction(std::string name, Human human, std::string action, std::string target)
{
	std::cout << "<" << name << "> ";
	human.action(action, target);
}

int				main(void)
{		
	Human	bob;
	Human	fred;

	callAction("Bob", bob, "MELEE_ATTACK", "COVID-19");
	callAction("Bob", bob, "INTIMIDATING_SHOUT", "COVID-19");
	callAction("Bob", bob, "foo", "bar");
	callAction("Fred", fred, "RANGED_ATTACK", "BOB");
	std::cout << "<Bob> Aie!" << std::endl;
	callAction("Fred", fred, "bar", "foo");
	callAction("Fred", fred, "INTIMIDATING_SHOUT", "COVID-19");
	return (0);
}
