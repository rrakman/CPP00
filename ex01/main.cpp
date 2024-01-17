#include<iostream>

#include"Contact.hpp"
#include"PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook   myPhoneBook;

    
    while(1)
    {
        getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout<<"Dont't Forget : usage : ADD SEARCH EXIT.\n";
            break;
        }
        if(input == "EXIT" || input == "exit")
            break;
        if(input == "ADD" || input == "add")
        {
            myPhoneBook.ADD();
        }
        else if(input == "SEARCH")
            std::cout<<"searching ....\n";
        else
            std::cout<<"USAGE: add search exit\n";
    }
}