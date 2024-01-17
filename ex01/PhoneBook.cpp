#include"PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0)
{
    std::cout<<"Welcome to my PhoneBook\n";
    std::cout<<"usage : ADD SEARCH EXIT.\n";
}

void PhoneBook::ADD() 
{
    std::string str = "";
    while(str == "")
    {
        std::cout<<"First name: ";
        getline(std::cin,str);
        if(std::cin.eof())
            exit(1);
        myContacts[count%8].SetFname(str);
    }
    str = "";
    while(str == "")
    {
        std::cout<<"Last name: ";
        getline(std::cin,str);
        if(std::cin.eof())
            exit(1);
        myContacts[count%8].SetLname(str);
    }
    str = "";
    while(str == "")
    {
        std::cout<<"Nickname: ";
        getline(std::cin,str);
        if(std::cin.eof())
            exit(1);
        myContacts[count%8].SetNname(str);
    }
    str = "";
    while(str == "")
    {
        std::cout<<"Phone Number: ";
        getline(std::cin,str);
        if(std::cin.eof())
            exit(1);
        myContacts[count%8].SetPhoneNumber(str);
    }
    str = "";
    while(str == "")
    {
        std::cout<<"Darkest Secret: ";
        getline(std::cin,str);
        if(std::cin.eof())
            exit(1);
        myContacts[count%8].Setdarkestsecret(str);
    }
    count++;
    std::cout<<count<<std::endl;
}
