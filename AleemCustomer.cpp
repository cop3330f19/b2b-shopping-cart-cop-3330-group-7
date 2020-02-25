#include <Customer.h>
#include <string>

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

string Customer::setCustomerNumber(){
    return customerNumber;
}

double Customer::setLineOfCredit(){
    return lineOfCredit;
}
