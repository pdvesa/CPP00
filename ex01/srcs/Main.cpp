#include <PhoneBook.hpp>
#include <Contact.hpp>
#include <iostream>
#include <string> //fix headers at some point

void print_instructions()
{
	std::cout << "Please run one of the following commands: ADD, SEARCH or EXIT" << std::endl;
	std::cout << "ADD for adding contact, SEARCH for looking up a contact and EXIT should be self explanatory" << std::endl;
}

int main()
{
	std::string	input;
	PhoneBook	phone_book;
	
	print_instructions();
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			phone_book.add_contact();
		else if (input == "SEARCH")
			phone_book.search_contact();
		else if (input == "EXIT")
			return (EXIT_SUCCESS);
		else if (!input.empty())
			std::cout << "Incorrect input" << std::endl;
	}
	return (EXIT_FAILURE);
}