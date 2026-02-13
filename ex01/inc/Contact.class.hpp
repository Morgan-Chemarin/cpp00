/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:06:47 by dev               #+#    #+#             */
/*   Updated: 2026/02/13 16:33:30 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
public:
	Contact( void );
	~Contact( void );

	void setContact( void );

	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();

	void displayFull( void );

private:
	std::string firstName;
	std::string lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string darkestSecret;
};

#endif