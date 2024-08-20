#include <Contact.hpp>

const std::string&	Contact::get_first_name(void) const
{
	return (first_name);
}

const std::string&	Contact::get_last_name(void) const
{
	return (last_name);
}

const std::string&	Contact::get_nickname(void) const
{
	return (nickname);
}

const std::string&	Contact::get_phone_number(void) const
{
	return (phone_number);
}

const std::string&	Contact::get_darkest_meme(void) const
{
	return (darkest_meme);
}

int	Contact::get_index(void) const
{
	return (index);
}

void	Contact::set_first_name(const std::string& name)
{
	first_name = name;
}

void	Contact::set_last_name(const std::string& name)
{
	last_name = name;
}

void	Contact::set_nickname(const std::string& name)
{
	nickname = name;
}

void	Contact::set_phone_number(const std::string& number)
{
	phone_number = number;
}

void	Contact::set_darkest_meme(const std::string& secret)
{
	darkest_meme = secret;
}

void	Contact::set_index(int i)
{
	index = i;
}

Contact::Contact()
{
	index = 0;
}

