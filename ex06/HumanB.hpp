/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:24:21 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:53:40 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB(void);

	void			attack(void);
	inline void		setWeapon(Weapon &weapon) { _weapon = &weapon; }


	private:

	std::string		_name;
	Weapon			*_weapon;
};

#endif
