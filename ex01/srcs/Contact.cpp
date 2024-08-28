#include <Contact.hpp>

const std::string&	Contact::getFirstName(void) const
{
	return (firstName);
}

const std::string&	Contact::getLastName(void) const
{
	return (lastName);
}

const std::string&	Contact::getNickname(void) const
{
	return (nickname);
}

const std::string&	Contact::getPhoneNumber(void) const
{
	return (phoneNumber);
}

const std::string&	Contact::getSecret(void) const
{
	return (darkestMeme);
}

int	Contact::getIndex(void) const
{
	return (index);
}

void	Contact::setFirstName(const std::string& name)
{
	firstName = name;
}

void	Contact::setLastName(const std::string& name)
{
	lastName = name;
}

void	Contact::setNickname(const std::string& name)
{
	nickname = name;
}

void	Contact::setPhoneNumber(const std::string& number)
{
	phoneNumber = number;
}

void	Contact::setSecret(const std::string& secret)
{
	darkestMeme = secret;
}

void	Contact::setIndex(int i)
{
	index = i;
}

Contact::Contact()
{
	index = 0;
}

Contact::~Contact() 
{	
}

