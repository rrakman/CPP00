#include"PhoneBook.hpp"

void PhoneBook::ADD() 
{
    std::string str;
    std::cout<<"first name: ";
    getline(std::cin,str);
    if(str.empty() || std::cin.eof()){
        // std::cout<<std::endl;
        return;
    }
    myContacts[count%8].SetFname(str);
    
    std::cout<<"last name: "<<std::endl;
    getline(std::cin,str);
    if(str.empty() && std::cin.eof()){
        exit(1);
    }
    myContacts[count%8].SetLname(str);
    
    std::cout<<"nickname: "<<std::endl;
    getline(std::cin,str);
    if(str.empty() && std::cin.eof()){
        exit(1);
    }
    myContacts[count%8].SetNname(str);
    
    std::cout<<"Phone Number: ";
    getline(std::cin,str);
    if(str.empty() && std::cin.eof()){
        exit(1);
    }
    myContacts[count%8].SetPhoneNumber(str);
    
    std::cout<<"Darkest secret : ";
    getline(std::cin,str);
    if(str.empty() && std::cin.eof()){
        exit(1);
    }
    myContacts[count%8].Setdarkestsecret(str);
    
}
