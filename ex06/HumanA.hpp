/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:24:12 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 19:22:24 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	inline void		attack(void)
	{
		std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
	}


	private:

	std::string		_name;
	Weapon			&_weapon;
};

#endif
