/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:06:49 by dev               #+#    #+#             */
/*   Updated: 2026/02/13 16:34:21 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void )
{

}

Contact::~Contact( void )
{}

static bool getInput(std::string prompt, std::string &field)
{
	while (field.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, field))
			return false;

		if (!field.empty())
			return true;

		std::cout << "Field can't be empty." << std::endl;
	}
	
	return true;
}

void Contact::setContact( void )
{
	this->firstName.clear();
	this->lastName.clear();
	this->nickName.clear();
	this->phoneNumber.clear();
	this->darkestSecret.clear();

	if (!getInput("First name: ", this->firstName)) return;
	if (!getInput("Last name: ", this->lastName)) return;
	if (!getInput("Nickname: ", this->nickName)) return;
	if (!getInput("Phone number: ", this->phoneNumber)) return;
	if (!getInput("Darkest secret: ", this->darkestSecret)) return;

	return;
}

std::string Contact::getFirstName( void)
{
	return this->firstName;
}

std::string Contact::getLastName( void)
{
	return this->lastName;
}

std::string Contact::getNickName( void)
{
	return this->nickName;
}

void Contact::displayFull( void )
{
	std::cout << "First name: " << this->firstName << std::endl
			  << "Last name: " << this->lastName << std::endl
			  << "Nick name: " << this->nickName << std::endl
			  << "Phone number: " << this->phoneNumber << std::endl
			  << "Darkest secret: " << this->darkestSecret << std::endl;
	
	return;
}