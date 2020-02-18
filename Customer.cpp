#include <iostream>
#include <string>
#include "Customer.h"
using namespace std;

Customer::Customer(string num, string name, double credit)
{
    setCustomerNum (num);
    setCustomerName (name);
    setCredit (credit);
}

Customer::Customer() {
    customerNum="";
    customerName="";
    lineOfCredit=0.0;
}

void setAddressPointer(string Address)
{
string Address * corperateAddress;
}
string getAddressPointer()
{
    return Address;
}
void Customer::setCustomerNum (string num)
{
    CustomerNum=num;
}
string Customer::getCustomerNum()
{
    return CustomerNum;
}
void Customer::setCustomerName (string name)
{
    CustomerName=name;
}
string Customer::getCustomerName()
{
    return CustomerName;
}
void Customer::Credit (double credit)
{
    lineOfCredit=credit;
}
double Customer::getCredit()
{
    return lineOfCredit;
}
