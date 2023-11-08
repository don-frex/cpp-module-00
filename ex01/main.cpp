/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:17:44 by asaber            #+#    #+#             */
/*   Updated: 2023/11/08 19:59:49 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	start_program(void)
{
	std::string	num;
	std::cout << "Select what do you want!" << std::endl;
	std::getline(std::cin, num);
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
	P_book.increment_count();
	ft_start();
	while (1)
	{
		str = start_program();
		if (str == "ADD")
			P_book.add_contact();
		else if (str == "SAERCH")
			P_book.get_contacts();
		if(str == "EXIT")
			exit(0);  
	}
}