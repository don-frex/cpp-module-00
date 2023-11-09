/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:18:17 by asaber            #+#    #+#             */
/*   Updated: 2023/11/09 17:23:15 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iosfwd>
#include <limits>
#include <string>
#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACT 8

class PhoneBook
{
	private:
		Contact contacts[8];
		int		count;
	public:
		void	add_contact(void);
		void	get_contacts(void);
		PhoneBook();
};

#endif