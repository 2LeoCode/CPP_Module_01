/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 19:15:16 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/13 16:38:28 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string const & dest, std::string const & message)
{
	bool		method = !dest.compare("console");
	method_ft	log_method[2] = {&Logger::logToFile, &Logger::logToConsole};
	method_ft	ft = log_method[method];

	if (!method)
		_file.open(dest, std::ofstream::app);
	(this->*ft)(makeLogEntry(message));
	if (_file.is_open())
		_file.close();
}

Logger::~Logger(void)
{
}

std::string		Logger::makeLogEntry(std::string const & msg)
{
	time_t			c_time = time(NULL);
	std::string		time_str = std::ctime(&c_time);

	time_str.erase(time_str.end() - 1);
	time_str.insert(time_str.begin(), '[');
	time_str.append("] ");
	return (time_str += msg);
}
