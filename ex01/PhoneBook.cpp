#include"PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : count(0)
{
    std::cout<<"Welcome to my PhoneBook\n";
    std::cout<<"usage : ADD SEARCH EXIT.\n";
}
std::string PhoneBook::SetValues(std::string s)
{
    std::string str;
    while(1)
    {
        std::cout<<s;
        getline(std::cin,str);
        if(std::cin.eof())
            exit(1);
        if(str != "")
            return str;
    }
}
void PhoneBook::ADD() 
{
    myContacts[count % 8].SetFname(SetValues("First name: "));
    myContacts[count % 8].SetLname(SetValues("Last name: "));
    myContacts[count % 8].SetNname(SetValues("Nickname: "));
    myContacts[count % 8].SetPhoneNumber(SetValues("Phone Number: "));
    myContacts[count % 8].Setdarkestsecret(SetValues("Darkest Secret: "));
    count++;
}

std::string PhoneBook::Get_values(std::string s)
{
    std::string rslt;
    if(s.length() > 10)
        rslt = s.substr(0,9) + ".";
    else
        rslt = s;
    return rslt;
}


void PhoneBook::SEARCH()
{
    std::cout<<"┏-------------------------------------------┓"<<std::endl;
    std::cout<<"|"<<std::right<<std::setw(10)<<"index"<<"|"<<std::right<<std::setw(10)<<"FirstName"<<"|"<<std::right<<std::setw(10)<<"NickName"<<"|"<<std::right<<std::setw(10)<<"LastName"<<"|"<<std::endl;
    std::cout<<"┗-------------------------------------------┛"<<std::endl;
    for(int i = 0; i <= 7; i++)
    {
        if(myContacts[i].GetFname() == "")
            break;
        std::cout<<"|"<<std::right<<std::setw(10)<<i+1<<"|"<<std::right<<std::setw(10)<<Get_values(myContacts[i].GetFname())<<"|"<<std::right<<std::setw(10)<<Get_values(myContacts[i].GetLname())<<"|"<<std::right<<std::setw(10)<<Get_values(myContacts[i].GetNname())<<"|"<<std::endl;
    }
    std::cout<<"---------------------------------------------"<<std::endl;
    std::string index = "";
    while(index == "")
    {
        std::cout<<"index :";
        getline(std::cin,index);
        if(std::cin.eof())
            exit(1);
        bool check = true;
        for (size_t i = 0; i < index.size(); i++)
        {
            if (!isdigit(index[i]))
            {
                check = false;
                break;
            }
        }
        int idx = std::atoi(index.c_str());
        if(!check || idx < 1 || idx > 8)
        {
            std::cout<<"Error! Give me a number from 1 to 8.\n";
            index = "";
        }
        else
        {
            std::cout<<"First Name : " + Get_values(myContacts[idx-1].GetFname())<<std::endl;
            std::cout<<"Last Name : "<<myContacts[idx-1].GetLname()<<std::endl;
            std::cout<<"NickName : "<<myContacts[idx-1].GetNname()<<std::endl;
            std::cout<<"PhoneNumber : "<<myContacts[idx-1].GetPhoneNumber()<<std::endl;
            std::cout<<"Darkest Secret : "<<myContacts[idx-1].Getdarkestsecret()<<std::endl;
        }
    }

}