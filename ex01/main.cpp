#include<iostream>

#include"Contact.hpp"
#include"PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook   myPhoneBook;

    std::cout<<"Welcome to my PhoneBook\n";
    while(1)
    {
        std::cout<<"usage : ADD SEARCH EXIT.\n";
        getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout<<"Dont't Forget : usage : ADD SEARCH EXIT.\n";
            break;
        }
        if(input == "EXIT")
            break;
        if(input == "ADD")
        {
            myPhoneBook.ADD();
        }
        else if(input == "SEARCH")
            std::cout<<"searching ....\n";
        else
            std::cout<<"USAGE: add search exit\n";
    }
}