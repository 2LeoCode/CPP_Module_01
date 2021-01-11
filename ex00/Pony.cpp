/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:43:47 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/08 22:26:27 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony(void)
{
	std::ostringstream	out;
	std::ofstream		logfile;

	out	<< "====================" << std::endl
		<< "DELETE Pony " << c_id << std::endl
		<< "====================" << std::endl << std::endl;
	logfile.open("logs.txt", std::fstream::app);
	logfile << out.str();
	logfile.close();
	std::cout << out.str();
	if (c_baby)
	{
		delete c_baby;
		c_baby = NULL;
	}
}

Pony::Pony(void)
{
	std::ostringstream	out;
	std::ofstream		logfile;
	static uint32_t		id = 1;

	c_id = id;
	c_age = randBetween(0, 25);
	c_color = randBetweenStrings(5 , "RED", "GREEN", "BLUE", "YELLOW", "PINK");
	c_gender = randBool();
	c_hungry = false;
	c_jumpHeight = randBetween(100, 200);
	c_baby = nullptr;
	out	<< "====================" << std::endl
		<< "CREATE Pony " << id << std::endl
		<< "====================" << std::endl
		<< "AGE\t\t\t" << c_age << std::endl
		<< "COLOR\t\t" << c_color << std::endl
		<< "GENDER\t\t" << (c_gender ? "FEMALE" : "MALE") << std::endl
		<< "JUMP HEIGHT\t" << c_jumpHeight << std::endl
		<< "====================" << std::endl << std::endl;
	std::cout << out.str();
	logfile.open("logs.txt", std::fstream::app);
	logfile << out.str();
	logfile.close();
	id++;
}

void			Pony::jump(int obstacleSize)
{
	std::ostringstream	out;
	std::ofstream		logfile;

	out << c_id;
	if (c_hungry)
		out << " is hungry, he doesn't want to jump";
	else
	{
		out << " tries to jump over an obstacle of " << obstacleSize << std::endl << c_id;
		if (obstacleSize > c_jumpHeight)
			out << " failed to jump over the obstacle";
		else
			out << " successfuly jumped over the obstacle";
		c_hungry = true;
	}
	out << std::endl;
	std::cout << out.str();
	logfile.open("logs.txt", std::fstream::app);
	logfile << out.str();
	logfile.close();
}

void			Pony::haveBaby(Pony &pony2)
{
	std::ostringstream	out;
	std::ofstream		logfile;

	out << c_id << " and " << pony2.c_id;
	if (c_gender != pony2.c_gender)
	{
		if ((c_age < 2) || (pony2.c_age < 2))
			out << " can't have a baby, one of them is too young";
		else
		{
			out << " are making a baby!";
			c_baby = ponyOnTheHeap();
		}
	}
	else
		out << " can't have a baby, they are the same gender";
	out << std::endl;
	std::cout << out.str();
	logfile.open("logs.txt", std::fstream::app);
	logfile << out.str();
	logfile.close();
}

void			Pony::eat(std::string foodName)
{
	std::ostringstream	out;
	std::ofstream		logfile;

	out << c_id << " eats " << foodName << std::endl;
	std::cout << out.str();
	logfile.open("logs.txt", std::fstream::app);
	logfile << out.str();
	logfile.close();
	c_hungry = false;
}

Pony			ponyOnTheStack(void)
{
	Pony	newPony;

	return (newPony);
}

inline Pony		*ponyOnTheHeap(void)
{
	return (new Pony);
}

std::string		randBetweenStrings(int ac, ...)
{
	va_list			av;
	int				index;

	va_start(av, ac);
	index = randBetween(1, ac);
	while (--index)
		va_arg(av, char*);
	return (va_arg(av, char*));
}

inline bool		randBool(void)
{
	return ((bool)(std::rand() % 2));
}

inline int		randBetween(int a, int b)
{
	return (a + std::rand() % (b - a + 1));
}
