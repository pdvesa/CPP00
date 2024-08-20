#include <PhoneBook.hpp>
#include <Contact.hpp>
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

std::string	pikkuapina(std::string str)
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

void	PhoneBook::add_contact()
{
	Contact 	contact;
	std::string	input;
	static int	index = 0;
	
	std::cout << "Enter first name:" << std::endl;
	std::cin >> input;
	contact.set_first_name(input);
	std::cout << "Enter last name:" << std::endl;
	std::cin >> input;
	contact.set_last_name(input);
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> input;
	contact.set_nickname(input);
	std::cout << "Enter phone number:" << std::endl;
	std::cin >> input;
	contact.set_phone_number(input);
	std::cout << "Please allow me to store your darkest secret:" << std::endl;
	std::cin >> input;
	contact.set_darkest_meme(input);
	contact.set_index(index);
    contact_list[index] = contact;
    if (index == MAX_CONTACT - 1)
		index = 0;
    else
        index++;
    if (contact_count < MAX_CONTACT - 1)
        contact_count++;
}

void    PhoneBook::search_contact()
{
    unsigned int	index;
	
	if (contact_count == -1)
	{
		std::cout << "There is nothing set you MONKE" << std::endl;
		return ;
	}
	for (int i = 0; i <= contact_count; i++)
	{
		std::cout << std::setw(10) << std::right << (contact_list[i].get_index()) <<  "|"; //useless function top kek
		std::cout << std::setw(10) << std::right << pikkuapina(contact_list[i].get_first_name()) <<  "|";
		std::cout << std::setw(10) << std::right << pikkuapina(contact_list[i].get_last_name()) <<  "|";
		std::cout << std::setw(10) << std::right << pikkuapina(contact_list[i].get_nickname()) <<  std::endl;
	}
	std::cout << "Select the index for the contact you want to observe more intimately" << std::endl;
	std::cin >> index;
	if (index > (unsigned int)contact_count || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index, try again" << std::endl;
		return ;
	}
	std::cout << contact_list[index].get_first_name() << std::endl;
	std::cout << contact_list[index].get_last_name() << std::endl;
	std::cout << contact_list[index].get_nickname() << std::endl;
	std::cout << contact_list[index].get_phone_number() << std::endl;
	std::cout << contact_list[index].get_darkest_meme() << std::endl;	
}

PhoneBook::PhoneBook()
{
    contact_count = -1;
}