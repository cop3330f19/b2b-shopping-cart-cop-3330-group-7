class Customer{
    private:
    std::string customerNumber;
    std::string customerName;
    double lineOfCredit;
    Address * corperateAddress;
    
    public:
    std::string setCustomerName (std::string cName);
    std::string setCustomerNumber (std::string cNum);
    double setLineOfCredit (double loCredit);
}
