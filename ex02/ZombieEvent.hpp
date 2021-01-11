/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:55:20 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/09 21:35:26 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class				ZombieEvent
{
	public:

	ZombieEvent();
	~ZombieEvent();
	Zombie			*newZombie(std::string name);
	Zombie			*bite(Zombie *zombie);
	void			takeDamage(Zombie **zombie, std::string weaponName);
	void			remove(Zombie *zombie);
	void			clear(void);
	Zombie			*randomChump(void);
	void			setZombieType(zombieType type);


	private:

	zombieType		*c_type;
	Zombie			*c_zombieList;
};

#endif
