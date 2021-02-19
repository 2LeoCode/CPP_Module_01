/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:39:57 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:49:52 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int		main(void)
{
	Human	bob;
	Human	pierre = Human("Pierre", 20);

	std::cout << "bob.identify() = " << bob.identify() << std::endl;
	std::cout << "bob.getBrain().identify() = " << bob.getBrain().identify() << std::endl;
	std::cout << "pierre.identify() = " << pierre.identify() << std::endl;
	std::cout << "pierre.getBrain().identify() = " << pierre.getBrain().identify() << std::endl;
	std::cout << "Say \"Hello\" Bob!" << std::endl;
	bob.say("Hello!");
	std::cout << "Say \"Hello\" Pierre!" << std::endl;
	pierre.say("Hello!");
	return (0);
}
