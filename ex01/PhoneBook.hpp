#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#endif
#include <iostream>
#include<string>
#include"Contact.hpp"

class PhoneBook
{
    private:
        Contact myContacts[8];
        unsigned int count;
    public:
        void ADD();
        void SEARCH();
        void EXIT();
        unsigned int max;

};
