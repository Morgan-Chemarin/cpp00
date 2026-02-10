/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:06:49 by dev               #+#    #+#             */
/*   Updated: 2026/02/10 14:45:08 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
}

static void getInput(const std::string &prompt, std::string &field)
{
	while (field.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, field);
		if (field.empty())
			std::cout << "Field is empty" << std::endl;
	}
}

void Contact::setContact()
{
	firstName.clear();
    lastName.clear();
    nickname.clear();
    phoneNumber.clear();
    darkestSecret.clear();

	getInput("First name: ", firstName);
	getInput("Last name: ", lastName);
	getInput("Nickname: ", nickname);
	getInput("Phone number: ", phoneNumber);
	getInput("Darkest secret: ", darkestSecret);
}

std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getNickname() const
{
	return nickname;
}

void Contact::displayFull() const
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}