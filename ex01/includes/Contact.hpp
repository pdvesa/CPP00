#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact 
{	
	private:
		std::string			firstName;
		std::string			lastName;
		std::string			nickname;
		std::string			phoneNumber;
		std::string			darkestMeme;
		int					index;
	public:
		const std::string&	getFirstName(void) const;
		const std::string&	getLastName(void) const;
		const std::string&	getNickname(void) const;
		const std::string&	getPhoneNumber(void) const;
		const std::string&	getSecret(void) const;
		int					getIndex(void) const;
		void				setFirstName(const std::string& name);
		void				setLastName(const std::string& name);
		void				setNickname(const std::string& name);
		void				setPhoneNumber(const std::string& number);
		void				setSecret(const std::string& secret);
		void				setIndex(int i);
		Contact();
		~Contact();
};

#endif
