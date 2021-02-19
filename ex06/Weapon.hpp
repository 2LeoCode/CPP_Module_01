/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:24:26 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 20:55:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

namespace ft
{
	std::string					strcapitalize(std::string &s);
	inline void					toupper(char &c) { c -= 32 * islower(c); }
	inline bool					islower(char c) { return ((c >= 'a') && (c <= 'z')); }
}

class Weapon
{
	public:

	Weapon(std::string type);
	~Weapon(void);

	inline const std::string &getType(void) const { return (_type); }
	inline void setType(std::string newType) { _type = ft::strcapitalize(newType); }


	private:

	std::string					_type;
};

#endif
