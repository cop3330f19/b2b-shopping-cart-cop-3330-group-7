class Customer{
    public:
    std::string customerNumber;
    std::string customerName;
    double lineOfCredit;
    Address * corperateAddress;
    
    std::string setCustomerName (std::string cName);
    std::string setCustomerNumber (std::string cNum);
    double setLineOfCredit (double loCredit);
}
