#include"PhoneBook.hpp"

void PhoneBook::add() {
    Contact c;
    std::cout<<"what's your first name: ";
    std::string input;
    getline(std::cin,input);
    if(std::cin.eof() && input.empty()){
        std::cerr<<"Error\n";
        exit(0);
    }
    c.SetFname(input);
}
