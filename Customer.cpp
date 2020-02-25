#include <iostream>
#include <string>
#include "Customer.h"
#include "Address.h"
using namespace std;

Customer::Customer(string num, string name, double credit)
{
    setCustomerNum (num);
    setCustomerName (name);
    setCredit (credit);
}

Customer::Customer() {
    setCustomerNum("");
    setCustomerName("");
    setCredit(0.0);
    customerNum="";
    customerName="";
    lineOfCredit=0.0;
}

// void Address::setAddressPointer(string Address)
// {
// string Address * corperateAddress;
// }
// string getAddressPointer()
// {
//     return Address;
// }
void Customer::setCustomerNum (string num)
{
    customerNum=num;
}
string Customer::getCustomerNum()
{
    return customerNum;
}
void Customer::setCustomerName (string name)
{
    customerName=name;
}
string Customer::getCustomerName()
{
    return customerName;
}
void Customer::setCredit (double credit)
{
    lineOfCredit=credit;
}
double Customer::getCredit()
{
    return lineOfCredit;
}
