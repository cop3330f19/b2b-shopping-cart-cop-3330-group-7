#include <iostream>
#include <string>
//#include "Address.h"
class Customer
{
    private:
        std::string customerNum;
        std::string customerName;
        double lineOfCredit;
//         Address * corperateAddress;
        
    public:
        Customer (std::string num, std::string name, double credit);
        Customer();
        void setAddressPointer(std::string Address);
        void setCustomerNum (std::string num);
        void setCustomerName (std::string name);
        void setCredit (double credit);
        std::string getAddressPointer();
        std::string getCustomerNum();
        std::string getCustomerName();
        double getCredit();
};
