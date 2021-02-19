/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:51:48 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:43:06 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	public:

	ZombieHorde(std::uint32_t n = 1);
	~ZombieHorde(void);

	void	announce(void);

	private:

	std::uint32_t	_size;
	Zombie			**_horde;
};

#endif
