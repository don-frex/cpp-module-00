/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:17:44 by asaber            #+#    #+#             */
/*   Updated: 2023/11/09 17:05:14 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	start_program(void)
{
	std::string	num;
	std::cout << "Select what do you want!" << std::endl;
	std::getline(std::cin, num);
	if (std::cin.eof())
		exit(1);
	return num;
}

void	ft_start(void)
{
	std::cout << "************************************" << std::endl;
	std::cout << "*             1: ADD               *" << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "*             2: SEARCH            *" << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "*             3: EXIT              *" << std::endl;
	std::cout << "************************************" << std::endl;
}

int	main()
{
	PhoneBook	P_book;
	std::string	str;
	ft_start();
	while (1)
	{
		str = start_program();
		if (str == "ADD")
			P_book.add_contact();
		else if (str == "SEARCH")
			P_book.get_contacts();
		
		else if(str == "EXIT")
			exit(0);  
	}
}