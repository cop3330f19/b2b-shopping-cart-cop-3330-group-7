#include <string>
class Customer{
    private:
    std::string customerNumber;
    std::string customerName;
    double lineOfCredit;
//     Address * corperateAddress;
    
    public:
    void setCustomerName (std::string cName);
    void setCustomerNumber (std::string cNum);
    void setLineOfCredit (double loCredit);
    
    std::string getCustomerName();
    std::string getCustomerNumber();
    double getLineOfCredit();
};
