/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:06:53 by dev               #+#    #+#             */
/*   Updated: 2026/02/10 15:15:07 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() : index(0), count(0) {}

void PhoneBook::addContact()
{
	contacts[index].setContact();
	index = (index + 1) % 8;
	if (count < 8)
		count++;
}

static std::string formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::searchContact()
{
	if (count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < count; ++i)
	{
		std::cout << std::setw(10) << (i + 1) << "|"
				  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
	}

	std::string line;
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, line))
		return;

	for (size_t i = 0; i < line.length(); ++i)
	{
		if (!std::isdigit(line[i]))
		{
			std::cout << "Invalid index." << std::endl;
			return;
		}
	}

	int idx = atoi(line.c_str());
	if (idx < 1 || idx > count)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	contacts[idx - 1].displayFull();
}