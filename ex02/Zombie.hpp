/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:44:39 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/09 22:11:23 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <type_traits>
# include <cstdint>
# include <cstdlib>
# include <ctime>
# include <cstdarg>

enum				zombieType
{
	walker,
	runner,
	bigOne
};

class				Zombie
{
	public:

	Zombie(std::string name = "Zombie", zombieType type = walker);
	~Zombie(void);
	void			advert(void);
	Zombie			*last(void);
	Zombie			*addback(std::string name, zombieType type);
	void			displayTypeAndName(void);
	inline bool		isdead(void)
	{
		return (c_life <= 0);
	}
	inline void		hit(int dmg)
	{
		c_life -= dmg;
	}
	inline Zombie	*next(void)
	{
		return (c_next);
	}
	inline void		setnext(Zombie *next)
	{
		c_next = next;
	}


	private:

	int				c_life;
	Zombie			*c_next;
	std::string		c_name;
	zombieType		c_type;
};

template <typename type> type	randBetween(type a, type b);
std::string						randBetweenStrings(int ac, ...);
std::string						ft_strcapitalize(std::string s);

#endif
