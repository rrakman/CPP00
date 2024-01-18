#include<iostream>

#include"Contact.hpp"
#include"PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook   myPhoneBook;

    
    while(1)
    {
        std::cout<<"$>";
        getline(std::cin,input);
        if(std::cin.eof())
        {
            std::cout<<"Dont't Forget : usage : ADD SEARCH EXIT.\n";
            break;
        }
        if(input == "EXIT")
            break;
        if(input == "ADD")
            myPhoneBook.ADD();
        else if(input == "SEARCH")
        {
            myPhoneBook.SEARCH();

        }
        else
        {
            std::cout<<"USAGE: ADD SEARCH EXIT.\n";
            // std::cout<<"$>";
        }
    }
}