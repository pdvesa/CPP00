#ifndef CONTACT_HPP
#define CONTACT_HPP



#include <string>

class Contact 
{	
	private:
		std::string 		first_name;
		std::string 		last_name;
		std::string 		nickname;
		std::string 		phone_number;
		std::string 		darkest_meme;
		int         		index;
	public:
		const std::string&	get_first_name(void) const;
		const std::string&	get_last_name(void) const;
		const std::string&	get_nickname(void) const;
		const std::string&	get_phone_number(void) const;
		const std::string&	get_darkest_meme(void) const;
		int					get_index(void) const;
		void 				set_first_name(const std::string& name);
		void 				set_last_name(const std::string& name);
		void				set_nickname(const std::string& name);
		void				set_phone_number(const std::string& number);
		void				set_darkest_meme(const std::string& secret);
		void				set_index(int i);
		Contact();
};

#endif
