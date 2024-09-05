#include <PhoneBook.hpp>
#include <Contact.hpp>
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

std::string	formatStr(std::string str)
{

	if (str.length() < 10)
		return (str);
	else
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	return (str);
}

void	PhoneBook::addContact()
{
	Contact		contact;
	std::string	input;
	static int	index = 0;

	std::cout << "Enter first name:" << std::endl;
	std::cin >> input;
	contact.setFirstName(input);
	std::cout << "Enter last name:" << std::endl;
	std::cin >> input;
	contact.setLastName(input);
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> input;
	contact.setNickname(input);
	std::cout << "Enter phone number:" << std::endl;
	std::cin >> input;
	contact.setPhoneNumber(input);
	std::cout << "Please allow me to store your darkest secret:" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, input);
	contact.setSecret(input);
	contact.setIndex(index);
	contactList[index] = contact;
	if (index == MAX_CONTACT - 1)
		index = 0;
	else
		index++;
	if (contactCount < MAX_CONTACT - 1)
		contactCount++;
}

void    PhoneBook::searchContact()
{
	unsigned int	index;

	if (contactCount == -1)
	{
		std::cout << "There is nothing set you MONKE" << std::endl;
		return ;
	}
	for (int i = 0; i <= contactCount; i++)
	{
		std::cout << std::setw(10) << std::right << (contactList[i].getIndex()) <<  "|";
		std::cout << std::setw(10) << std::right << formatStr(contactList[i].getFirstName()) <<  "|";
		std::cout << std::setw(10) << std::right << formatStr(contactList[i].getLastName()) <<  "|";
		std::cout << std::setw(10) << std::right << formatStr(contactList[i].getNickname()) <<  std::endl;
	}
	std::cout << "Select the index for the contact you want to observe more intimately" << std::endl;
	std::cin >> index;
	if (index > (unsigned int)contactCount || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index, try SEARCH again" << std::endl;
		return ;
	}
	std::cout << contactList[index].getFirstName() << std::endl;
	std::cout << contactList[index].getLastName() << std::endl;
	std::cout << contactList[index].getNickname() << std::endl;
	std::cout << contactList[index].getPhoneNumber() << std::endl;
	std::cout << contactList[index].getSecret() << std::endl;	
}

PhoneBook::PhoneBook()
{
    contactCount = -1;
}

PhoneBook::~PhoneBook()
{
}