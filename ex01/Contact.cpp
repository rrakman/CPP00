#include"Contact.hpp"

void Contact::SetFname(std::string str)
{
    fname = str;
    return ;
}

std::string Contact::GetFname()
{
    return(fname);
}

void Contact::SetLname(std::string str)
{
    lname = str;
    return ;
}

std::string Contact::GetLname()
{
    return(lname);
}

void Contact::SetNname(std::string str)
{
    nname = str;
    return ;
}

std::string Contact::GetNname()
{
    return(nname);
}

void Contact::SetPhoneNumber(std::string str)
{
    phonenumber = str;
    return ;
}

std::string Contact::GetPhoneNumber()
{
    return(phonenumber);
}

void Contact::Setdarkestsecret(std::string str)
{
    darkestsecret = str;
    return ;
}

std::string Contact::Getdarkestsecret()
{
    return(darkestsecret);
}