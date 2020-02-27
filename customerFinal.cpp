#include <iostream>
#include <string>
#include "Customer.h"
#include "Address.h"
using namespace std;

Customer::Customer(string num, string name, double credit, string address)
{
    setCustomerNum (num);
    setCustomerName (name);
    setCredit (credit);
    setAddress(address);
}

Customer::Customer() {
    setCustomerNum("");
    setCustomerName("");
    setCredit(0.0);
    setAddress("");
}


void Customer::setCustomerNum (string num)
{
    customerNum=num;
}
void Customer::setAddress(string address)
{
    customerAddress=address;
}

string Customer::getAddress()
{
    return customerAddress;
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
