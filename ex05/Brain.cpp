/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:08:24 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:44:16 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(int neurons) : _neurons(neurons)
{
}

Brain::~Brain(void)
{
}

std::string		Brain::identify(void) const
{
	std::ostringstream	s;

	s << "0x" << std::hex << reinterpret_cast<std::uint64_t>(this);
	return (s.str());
}
