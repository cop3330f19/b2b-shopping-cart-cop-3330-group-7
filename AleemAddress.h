class Address{
    private:
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    
    public:
    std::string getAddress(void);
    std::string setStreetAddress (std::string sAddress);
    std::string setCity (std::string City);
    std::string setState (std::string State);
    std::string setZipCode (std::string zCode);
}

