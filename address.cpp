#include <iostream>
#include <string>
#include "Address.h"
using namespace std;

Address::Address(string address, string cty, string st, string zipcd)
{
    setAddress(address);
    setCity(cty);
    setState(st);
    setZipCode(zipcd);
}
Address::Address(){
    streetAddress="";
    city="";
    state="";
    zipCode="";
}
void Address::setAddress(string address)
{
    streetAddress=address;
}
 string Address::getAddress()
{
    return streetAddress;
}
void Address::setCity(string cty)
{
    city=cty;
}
 string Address::getCity()
{
    return city;
}
void Address::setState(string st)
{
    state=st;
}
string Address::getState()
{
    return state;
}
void Address::setZipCode(string zipcd)
{
    zipCode=zipcd;
}
string Address::getZipCode()
{
    return zipCode;
}


