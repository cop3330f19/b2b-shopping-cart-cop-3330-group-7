#include <string>
class Address{
    
    private:
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    
    public:
    Address (std::string sAddress, std::string City, std::string State, std::string zCode);
    Address ();
    std::string getAddress(void);
    void setStreetAddress (std::string sAddress);
    void setCity (std::string City);
    void setState (std::string State);
    void setZipCode (std::string zCode);
    
    std::string getStreetAddress();
    std::string getCity();
    std::string getState();
    std::string getZipCode();
};
