/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:33:03 by lsuardi           #+#    #+#             */
/*   Updated: 2021/02/19 21:02:24 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>

# define ACTION_STR {"MELEE_ATTACK", "RANGED_ATTACK", "INTIMIDATING_SHOUT"}
# define ACTION_PTR {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout}

class Human
{
	private:

	void			meleeAttack(std::string const & target) const { std::cout << "Attacked " << target << " with melee." << std::endl; }
	void			rangedAttack(std::string const & target) const { std::cout << "Attacked " << target << " with ranged." << std::endl; }
	void			intimidatingShout(std::string const & target) const { std::cout << "Intimidated " << target << " with a terrible shout." << std::endl; }


	public:

	void			action(std::string const & action_name, std::string const & target) const;
};

typedef void		(Human::*method_function)(std::string const &) const;

#endif
