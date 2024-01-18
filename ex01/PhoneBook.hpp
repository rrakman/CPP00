#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#endif
#include <iostream>
#include<string>
#include"Contact.hpp"

class PhoneBook
{
    private:
        unsigned int count;
        Contact myContacts[8];
    public:
        PhoneBook();
        std::string SetValues(std::string s);
        std::string Get_values(std::string s);
        void ADD();
        void SEARCH();
};

