/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:18:54 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/10 17:50:02 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	public:

	Human(std::string name = "Bob", std::uint32_t neurons = 1);
	~Human(void);

	inline void			say(const std::string s)
	{
		std::cout << '<' << _name << "> " << (_brain->getNeurons() > 10 ? s : "Aghaga!") << std::endl;
	}
	inline const Brain	&getBrain(void)
	{
		return (*_brain);
	}
	inline std::string	identify(void)
	{
		return (_brain->identify());
	}


	private:

	const std::string	_name;
	const Brain			*_brain;
};

#endif
