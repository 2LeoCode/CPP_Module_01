/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 19:15:12 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/11 20:20:17 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger	log1("console", "Hello World !"),
			log2("file.log", "Hello World !"),
			log3("file.log", "Another log"),
			log4("console", "Another log on console");
	return (0);
}