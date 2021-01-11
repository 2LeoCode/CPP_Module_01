/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:32:30 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 15:36:01 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		s = "HI THIS IS BRAIN";
	std::string		&ref = s;
	std::string		*ptr = &s;

	std::cout << *ptr << std::endl << ref << std::endl;
	return (0);
}
