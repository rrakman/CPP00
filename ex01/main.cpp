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
        if(std::cin.eof() && input.empty())
        {
            std::cout<<"Dont't Forget : USAGE: add search exit.\n";
            break;
        }
        if(input == "exit")
            break;
        if(input == "add")
            myPhoneBook.add();
        else if(input == "search")
            std::cout<<"searching ....\n";
        else
            std::cout<<"USAGE: add search exit\n";
    }
}