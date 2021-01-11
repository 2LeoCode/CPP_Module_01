/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:31:07 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/11 13:18:32 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define IFLAG 1

int		getFlags(int ac, char **av)
{
	int		flags = 0;

	for (int i = 0; i < ac; i++)
		if (!std::strcmp(av[i], "-i"))
			flags |= IFLAG;
	return (flags);
}

int		main(int argc, char **argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		outputFileName, content;
	size_t			fileSize, s1Len, s2Len, pos = 0;
	char			*buf;
	int				flags = getFlags(argc - 1, argv + 1);

	do
		argv++, argc--;
	while (**argv == '-');
	if ((argc != 3) || !(s1Len = std::strlen(argv[1])) || !(s2Len = std::strlen(argv[2])))
		goto wrong_format;
	input.open(*argv, std::fstream::in);
	if (input.fail())
		goto open_fail;
	outputFileName = *argv;
	if (!(flags & IFLAG))
		outputFileName.append(".replace");
	input.seekg(0, input.end);
	buf = new char[fileSize = ((int)input.tellg() + 1)];
	input.seekg(0, input.beg);
	input.read(buf, fileSize);
	buf[fileSize] = 0;
	content = buf;
	delete[] buf;
	while ((pos = content.find(argv[1], pos)) != std::string::npos)
	{
		content.replace(pos, s1Len, argv[2]);
		pos += s1Len - 1;
	}
	output.open(outputFileName, std::fstream::trunc);
	output << content;
	return (0);
	open_fail:
	std::cout << "Error: failed to open file" << std::endl;
	return (-1);
	wrong_format:
	std::cout << "Error: usage ./replace <filename> <not_empty_string1> <not_empty_string2>" << std::endl;
	return (-1);
}
