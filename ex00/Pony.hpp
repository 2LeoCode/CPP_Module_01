/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:32:48 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/08 21:03:15 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include <cstdarg>
# include <sstream>
# include <fstream>

# define MALE false
# define FEMALE true

class				Pony
{
	public:
	
	Pony(void);
	~Pony(void);
	void			jump(int obstacleSize);
	void			eat(std::string foodName);
	void			haveBaby(Pony &pony2);


	private:

	uint32_t		c_id;
	uint32_t		c_age;
	bool			c_gender;
	bool			c_hungry;
	Pony			*c_baby;
	std::string		c_color;
	int				c_jumpHeight;
};

inline int			randBetween(int a, int b);
inline bool			randBool(void);
std::string			randBetweenStrings(int ac, ...);

Pony				ponyOnTheStack(void);
inline Pony			*ponyOnTheHeap(void);

#endif
