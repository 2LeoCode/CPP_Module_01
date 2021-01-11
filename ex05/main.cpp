/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:39:57 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 17:13:06 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int		main(void)
{
	Human	bob;
	Human	pierre = Human("Pierre", 20);

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	std::cout << "Say \"Hello\" Bob!" << std::endl;
	bob.say("Hello!");
	std::cout << "Say \"Hello\" Pierre!" << std::endl;
	pierre.say("Hello!");
	return (0);
}
