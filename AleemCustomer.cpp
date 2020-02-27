#include "Customer.h"
#include <string>
#include <iostream>
using namespace std;

void Customer::setCustomerName(string cName){
    customerName=cName;
}
void Customer::setCustomerNumber(string cNum){
    customerNumber=cNum;
}
void Customer::setLineOfCredit(double loCredit){
    lineOfCredit=loCredit;
}

string Customer::getCustomerName(){
    return (customerName);
}

string Customer::getCustomerNumber(){
    return customerNumber;
}

double Customer::getLineOfCredit(){
    return lineOfCredit;
}
