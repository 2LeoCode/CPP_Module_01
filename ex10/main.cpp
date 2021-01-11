/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 21:46:27 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/11 23:10:18 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char **argv)
{
	std::ifstream	*fileList;
	std::string		content;

	if (argc == 1)
		while (1)
			std::getline(std::cin, content), std::cout << content << std::endl;
	fileList = new std::ifstream[--argc];
	for (int i = 0; i < argc; i++)
	{
		fileList[i].open(argv[i + 1], std::fstream::in);
		if (fileList[i].fail())
		{
			std::cout << "cato9tails: " << argv[i + 1] << ": Can't open file" << std::endl;
			continue ;
		}
		while (std::getline(fileList[i], content))
		{
			std::cout << content;
			if (!fileList[i].eof())
				std::cout << std::endl;
		}
		fileList[i].close();
	}
	delete[] fileList;
	return (0);
}
