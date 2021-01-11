/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 19:15:14 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/11 20:16:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

class Logger
{
	public:

	Logger(std::string const & dest, std::string const & message);
	~Logger(void);


	private:

	inline void		logToConsole(std::string const &msg)
	{
		std::cout << msg << std::endl;
	}
	inline void		logToFile(std::string const &msg)
	{
		*_file << msg << std::endl;
	}
	std::string		makeLogEntry(std::string const &msg);

	std::ofstream	*_file;
};

typedef void		(Logger::*method_ft)(std::string const &);

#endif
