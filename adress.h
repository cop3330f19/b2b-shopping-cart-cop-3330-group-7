#include <iostream>
#include <string>

class Address{
private:
    std::string streetAddress;
    std::string city;
    std::string state; 
    std::string zipCode;  
public:
    Address(std::string address, std::string cty, std::string st, std::string zipcd);
    Address();
    void setAddress(std::string address);
    void setCity(std::string cty);
    void setState(std::string st);
    void setZipCode(std::string zipcd);
    std::string getAddress();
    std::string getCity();
    std::string getState();
    std::string getZipCode();
};
