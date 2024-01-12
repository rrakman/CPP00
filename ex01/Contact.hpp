#include<string>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    private:
        std::string fname;
        std::string lname;
        std::string nname;
        std::string phonenumber;
        std::string darkestsecret;
    public:
        void SetFname(std::string);
        std::string GetFname();
        void SetLname(std::string);
        std::string GetLname();
        void SetNname(std::string);
        std::string GetNname();
        void SetPhoneNumber(std::string);
        std::string GetPhoneNumber();
        void Setdarkestsecret(std::string);
        std::string Getdarkestsecret();
};

#endif