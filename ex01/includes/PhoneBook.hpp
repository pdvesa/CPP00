#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <Contact.hpp>

#ifndef MAX_CONTACT
#define MAX_CONTACT 8
#endif

class PhoneBook 
{    
    private:
        Contact contactList[MAX_CONTACT];
        int     contactCount;
    public:
        void    addContact();
        void    searchContact();
        PhoneBook();
        ~PhoneBook();
};

#endif