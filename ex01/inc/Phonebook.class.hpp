/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:06:45 by dev               #+#    #+#             */
/*   Updated: 2026/02/13 16:34:53 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class Phonebook {
public:
	Phonebook( void );
	~Phonebook( void );

	void addContact( void );
	void searchContact( void );
private:
	Contact contacts[8];

	int	index;
	int count;
};

#endif