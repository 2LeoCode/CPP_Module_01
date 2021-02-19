/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:48:57 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:52:23 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Brain
{
	public:

	Brain(int neurons = 1);
	~Brain(void);

	std::string				identify(void) const;
	inline std::uint32_t	getNeurons(void) const { return (_neurons); }


	private:

	std::uint32_t	_neurons;
};

#endif
