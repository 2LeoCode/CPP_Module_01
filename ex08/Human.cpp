/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:41:41 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/11 18:14:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Attacked " << target << " with melee." << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Attacked " << target << " with ranged." << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidated " << target << " with a terrible shout." << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string		actionNameList[3] = ACTION_STR;
	method_function actionPtr[3] = ACTION_PTR;
	method_function *ft = nullptr;

	for (int i = 0; i < 3; i++)
		if (!action_name.compare(actionNameList[i]))
			ft = new method_function(actionPtr[i]);
	if (!ft)
		goto fail;	
	(this->**ft)(target);
	delete ft;
	return ;

	fail:
	std::cout << "Unknown action: " << action_name << std::endl;
}
