/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:46:44 by asaber            #+#    #+#             */
/*   Updated: 2023/11/08 21:34:04 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::increment_count()
{
	if (!this->count)
		this->count = 0;
	else
		this->count++;
}

void	PhoneBook::add_contact()
{

	if (count >= MAX_CONTACT)
		count = 0;
	std::string data;
	std::cout << "press first name"<<std::endl;
	std::getline(std::cin, data);
	contacts[count].set_fistname(data);
	std::cout << "press last name"<<std::endl;
	std::getline(std::cin, data);
	contacts[count].set_lastname(data);
	std::cout << "press nickname"<<std::endl;
	std::getline(std::cin, data);
	contacts[count].set_nickname(data);
	std::cout << "press phone number"<<std::endl;
	std::getline(std::cin, data);
	contacts[count].set_phonenumber(data);
	std::cout << "press darkest secret : "<<std::endl;
	std::getline(std::cin, data);
	contacts[count].set_dark_secret(data);
	count++;
}


std::string check_lenth(const std::string& str)
{
    if (str.length() >= 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void	PhoneBook::get_contacts()
{
	int	i;

	i = 0;
	if (count == 0)
		std::cout << "not found any contact!" << std::endl;
	else
	{
		while (i < count)
		{
			std::cout << std::left << std::setw(10) << i + 1 << "|";
			std::cout << std::left << std::setw(10) << check_lenth(contacts[i].get_firstname()) << "|";
			std::cout << std::left << std::setw(10) << check_lenth(contacts[i].get_lastname()) << "|";
			std::cout << std::left << std::setw(10) << check_lenth(contacts[i].get_nickname()) << std::endl;
			i++;
		}
	}
		
}