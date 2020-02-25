#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>

class Address{
private:
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    
public:
    Address(std::string streetAddress, std::string city, std::string state, std::string zipCode);
    Address();
    void setAddressStreet(std::string streetAddress);
    void setAddressCity (std::string city);
    void setAddressState (std::string state);
    void setAddressZipCode (std:: string zipCode)
    std::string getAddressStreet();
    std::string getAddressCity();
    std::string getAddressState();
    std::string getAddressZipCode();    
}