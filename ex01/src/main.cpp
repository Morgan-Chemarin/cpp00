/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:06:05 by dev               #+#    #+#             */
/*   Updated: 2026/02/13 16:34:34 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

int main( void )
{
	Phonebook phonebook;
	std::string prompt;

	while (1)
	{
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, prompt))
			break;

		if (prompt == "ADD")
			phonebook.addContact();
		else if (prompt == "SEARCH")
			phonebook.searchContact();
		else if (prompt == "EXIT")
			break;
	}
	return 0;
}