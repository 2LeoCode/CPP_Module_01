/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:16:51 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:42:32 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	std::srand(std::time(nullptr));

	ZombieHorde		event = ZombieHorde(10);
	event.announce();
	return (0);
}
