#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iosfwd>
#include <limits>
#include <string>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	Phone_number;
		std::string	darkest_secret;
	public:
		void		set_fistname(std::string str);
		void		set_lastname(std::string str);
		void		set_nickname(std::string str);
		void		set_phonenumber(std::string str);
		void		set_dark_secret(std::string str);
		std::string	get_firstname(void);
		std::string	get_lastname(void);
		std::string	get_nickname(void);
		std::string	get_phonenumber(void);
		std::string	get_dark_secret(void);
		void		get_alldata();
};

#endif