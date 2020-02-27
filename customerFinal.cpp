#include <iostream>
#include <string>
//#include "Address.h"
class Customer
{
    private:
        std::string customerNum;
        std::string customerName;
        double lineOfCredit;
        std::string customerAddress;
        
    public:
        Customer (std::string num, std::string name, double credit, std::string adaddress);
        Customer();
        void setAddress(std::string address);
        void setCustomerNum (std::string num);
        void setCustomerName (std::string name);
        void setCredit (double credit);
        std::string getAddress();
        std::string getCustomerNum();
        std::string getCustomerName();
        double getCredit();
        
};
