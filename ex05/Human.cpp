/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:40:07 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 17:11:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(std::string name, std::uint32_t neurons) : _name(name), _brain(new Brain(neurons))
{
}

Human::~Human(void)
{
	delete _brain;
}
