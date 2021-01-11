/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:51:43 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 15:50:19 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdarg>

enum zombieType
{
	walker,
	runner,
	big_one,
};

class Zombie
{
	public:

	Zombie(zombieType type, std::string name = "Zombie");
	~Zombie(void);

	void			displayInfo(void);
	void			announce(void);
	inline bool		isdead(void)
	{
		return (_life <= 0);
	}
	inline void		hit(int dmg)
	{
		_life -= dmg;
	}


	private:

	int				_life;
	std::string		_name;
	zombieType		_type;
};

namespace rdm
{
	template <typename type> type	randBetween(type a, type b);
	std::string						randBetweenStrings(int n, ...);
}

#endif
