/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 19:08:17 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/09 10:38:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(int argc, char **argv)
{
	time_t			currentTime = std::time(nullptr);
	std::ofstream	logfile;
	std::string		arg, timeString = std::ctime(&currentTime), out;

	out = "============================\n# " + timeString.erase(24, 1) + " #\n============================\n\n";
	if (argc > 1)
		while (--argc)
		{
			arg = argv[argc];
			if (!arg.compare("--clear-logs") || !arg.compare("-c"))
			{
				std::remove("logs.txt");
				return (0);
			}
			std::cerr << argv[0] << ": unknown option `" << argv[argc] << '`' << std::endl;
			return (-1);
		}
	std::cout << out;
	logfile.open("logs.txt", std::fstream::app);
	logfile << out;
	logfile.close();
	std::srand(currentTime);

	Pony a = ponyOnTheStack();
	Pony b = ponyOnTheStack();
	Pony c = ponyOnTheStack();

	a.jump(150);
	b.jump(150);
	c.jump(150);
	a.jump(150);
	a.eat("APPLE");
	a.jump(150);
	a.haveBaby(b);
	c.haveBaby(a);
	b.haveBaby(c);
	return (0);
}
