/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:46:44 by asaber            #+#    #+#             */
/*   Updated: 2023/11/09 17:22:46 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

int findchar(const std::string& str, char target) {
    for (std::string::size_type i = 0; i < str.length(); ++i)
	{
        if (str[i] == target)
            return 1;
    }
    return 0;
}

void	PhoneBook::add_contact()
{

	if (count >= MAX_CONTACT)
		count = 0;
	std::string data;
	do{
	std::cout << "press first name"<<std::endl;
	std::getline(std::cin, data);
	}while(data.empty() || findchar(data, '	'));
	contacts[count].set_fistname(data);
	do{
	std::cout << "press last name"<<std::endl;
	std::getline(std::cin, data);
	}while(data.empty() || findchar(data, '	'));
	contacts[count].set_lastname(data);
	do{
	std::cout << "press nickname"<<std::endl;
	std::getline(std::cin, data);
	}while(data.empty() || findchar(data, '	'));
	contacts[count].set_nickname(data);
	do{
	std::cout << "press phone number"<<std::endl;
	std::getline(std::cin, data);
	}while(data.empty() || findchar(data, '	'));
	contacts[count].set_phonenumber(data);
	do{
	std::cout << "press darkest secret : "<<std::endl;
	std::getline(std::cin, data);
	}while(data.empty() || findchar(data, '	'));
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
	int	nbr;
	

	i = 0;
	if (count == 0)
		std::cout << "not found any contact!" << std::endl;
	else
	{
		while (i < MAX_CONTACT && !contacts[i].get_firstname().empty())
		{
			std::cout << std::right << std::setw(10) << i + 1 << "|";
			std::cout << std::right << std::setw(10) << check_lenth(contacts[i].get_firstname()) << "|";
			std::cout << std::right << std::setw(10) << check_lenth(contacts[i].get_lastname()) << "|";
			std::cout << std::right << std::setw(10) << check_lenth(contacts[i].get_nickname()) << std::endl;
			i++;
		}
		while (1)
		{
			std::cout << "Select Contact" << std::endl;
			std::cin >> nbr;
			while (std::cin.fail())
			{
				std::cout << "whrong number" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Select Contact" << std::endl;
				std::cin >> nbr;
			}
			if (nbr < 1 || nbr > MAX_CONTACT || contacts[nbr - 1].get_firstname().empty())
				std::cout << "whrong number" << std::endl;
			else
			{
				contacts[nbr - 1].get_alldata();
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				
				break;
			}
		}
	}
		
}