/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:18:16 by asaber            #+#    #+#             */
/*   Updated: 2023/11/08 21:12:01 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_fistname(std::string str)
{
	this->first_name = str;
}

void	Contact::set_lastname(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_phonenumber(std::string str)
{
	this->Phone_number = str;
}

void	Contact::set_dark_secret(std::string str)
{
	this->darkest_secret = str;
}

std::string	Contact::get_firstname(void)
{
	return first_name;
}

std::string	Contact::get_lastname(void)
{
	return last_name;
}

std::string	Contact::get_nickname(void)
{
	return nickname;
}

std::string	Contact::get_phonenumber(void)
{
	return Phone_number;
}

std::string	Contact::get_dark_secret(void)
{
	return darkest_secret;
}

void	Contact::get_alldata()
{
	std::cout << "first name: " << first_name << std::endl;
	std::cout << "last name: " << last_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << Phone_number << std::endl;
	std::cout << "darkest secret: " << darkest_secret << std::endl;

}

// whene you just search wiith out put index

