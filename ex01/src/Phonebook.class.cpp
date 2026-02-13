/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:06:53 by dev               #+#    #+#             */
/*   Updated: 2026/02/13 16:36:35 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include <iomanip>

Phonebook::Phonebook( void ): index(0), count(0)
{
}

Phonebook::~Phonebook( void )
{
}

void Phonebook::addContact( void )
{
	contacts[index].setContact();
	this->index = (index + 1) % 8;
	if (this->count != 8)
		this->count++;

	return;
}

static std::string formatField(std::string field)
{
	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	return field;
}

void Phonebook::searchContact( void )
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << std::endl;
	
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|"
			  	  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
			  	  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
			  	  << std::setw(10) << formatField(contacts[i].getNickName()) << std::endl;
	}

	std::string	line;
	std::cout << "Entrez index: ";
	if (!std::getline(std::cin, line))
		return;

	if (line.empty())
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
	
	for (size_t h = 0; h < line.length(); h++)
	{
		if (!std::isdigit(line[h]))
		{
			std::cout << "Invalid index." << std::endl;
			return;
		}
	}

	if (line.length() != 1)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

	int	idx = line[0] - '0';
    if (idx < 0 || idx > count - 1)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

	contacts[idx].displayFull();

	return;
}