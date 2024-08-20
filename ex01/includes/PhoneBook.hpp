#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <Contact.hpp>

#ifndef MAX_CONTACT
#define MAX_CONTACT 2
#endif

class PhoneBook 
{    
    private:
        Contact contact_list[MAX_CONTACT];
        int     contact_count;
    public:
        void    add_contact();
        void    search_contact();
        PhoneBook();
};

#endif