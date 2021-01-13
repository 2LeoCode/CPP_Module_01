/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:24:24 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/14 00:14:00 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(ft::strcapitalize(type))
{
}

Weapon::~Weapon(void)
{
}

std::string		ft::strcapitalize(std::string &s)
{
	for (int i = 0; s[i]; i++)
		ft::toupper(s[i]);
	return (s);
}
